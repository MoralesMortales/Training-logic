#include <iostream>//ta todo conectado

struct A1{
	int n;
	struct A1 *fila;
	struct A1 *columna;
};

void recorreFila (struct A1 *start){ 
	struct A1 *sptr = start; 
	while (sptr!=NULL){
		std::cout<<sptr->n<<"|";
		sptr = sptr->fila;
	}
	
	std::cout<<"\n";
}

void imprimirMatriz (A1* origen){
	for (A1* it=origen; it;it=it->columna){
		recorreFila(it);
	}
}

A1* crearFila (int numero){
	A1* origen=new A1{numero};
	A1* it=origen;//sptr=origen
	for (int i = numero + 1; i < numero + 3; i++){
		it->fila=new A1 {i};
		it=it->fila;
	}
	return origen;
}

void conectarFilas(A1* origen1,A1* origen2) {
	
	A1* it1=origen1;
	A1* it2=origen2;
	while (it1&&it2){
		it1->columna=it2;
		it1=it1->fila;//itera de un lugar de la fila a otro pero en una fila
		it2=it2->fila;//itera de un lugar de la fila a otra pero en una fila
	}
}

A1* crearMatriz(int numInicial, int numFilas){
	
	A1* origen[numFilas];
	origen[0]=crearFila(numInicial);
	
	
	for (int i=1; i<numFilas; i++){
		numInicial += 3;
		origen[i]=crearFila(numInicial);	
		conectarFilas(origen[i-1],origen[i]);
	}
	
	return origen[0];
	
}

int main(){
	
	A1* origen= crearMatriz(1,3);
	imprimirMatriz(origen);
	
	
	return 0;
}
