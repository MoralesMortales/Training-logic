#include <iostream>

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

int main(){
	
	A1* origen= crearFila(1);
	
	A1* origen2= crearFila(4);
	
	A1* origen3= crearFila(7);
	
	conectarFilas(origen,origen2);
	conectarFilas(origen2,origen3);
	
	imprimirMatriz(origen);
	
	return 0;
}
