#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int threeToOne(int d2,int d1,int d0){
	return d2*4+d1*2+d0*1;
}

int prev(int i,int n){
	if(i-1 >= 0)
	  return i-1;
	else
	  return n-1;
}

int next(int i, int n){
return (i+1)%n;
}

void inicializaEspacioCelular(int espacioCelular[2][80]){
	for(int fila=0;fila <2;fila++)
		for(int columna=0;columna <80;columna++)
			espacioCelular[fila][columna]=0;
	espacioCelular[0][39]=1;
}

void showInstante(int ticktock, int espacioCelular[2][80] ){
	for(int columna=0;columna<80;columna++){
		if(espacioCelular[ticktock][columna])
			cout << '1';
		else
			cout << ' ';
	}
	//cout << endl;	   
}

void generaInstanteSiguiente(int ticktock, int espacioCelular[2][80], int regla[8] ){
	//ticktock es el instante actual
	//(ticktock +1)%2 es el instante siguiente
	for(int columna=0;columna<80;columna++){
		//genera columna del instante siguiente
		espacioCelular[(ticktock +1)%2][columna]=
		regla[threeToOne(espacioCelular[ticktock][prev(columna,80)],
		           espacioCelular[ticktock][columna],
		           espacioCelular[ticktock][next(columna,80)]) ];
	}
	//avanza el instante actual
	//ticktock = (ticktock +1)%2;	
}

main(){
	int regla[8]={0,1,1,1,1,0,0,0};
	int espacioCelular[2][80];
	int ticktock=0;
	inicializaEspacioCelular(espacioCelular);
	
	for(int t=0;t<20;t++){
		showInstante(ticktock,espacioCelular);
		cout << endl;	 
		generaInstanteSiguiente(ticktock,espacioCelular,regla);
		ticktock = (ticktock +1)%2;
	}
	
}