#include <iostream>

/* Creo entender mas run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char const *argv[])
{

	int matriz_1[2][2];
	int matriz_2[2][2];
	int new_matriz[2][2];
	char option, continue_option;

	for (int f = 0; f < 2; f++)
	{
		for (int s = 0; s < 2; s++)
		{
			cout << "Que valor quiere para el espacio reservado de la matriz 1 en " << f << " - " << s << "\n";
			cin >> matriz_1[f][s];
		}
	}

	cout << "\nMatriz 1 es igual a: \n";

	for (int f = 0; f < 2; f++)
	{
		for (int s = 0; s < 2; s++)
		{
			cout << matriz_1[f][s] << " ";
		}

		cout << "\n";
	}

	cout << "\n";

	for (int f = 0; f < 2; f++)
	{
		for (int s = 0; s < 2; s++)
		{
			cout << "Que valor quiere para el espacio reservado de la matriz 2 en " << f << " - " << s << "\n";
			cin >> matriz_2[f][s];
		}
	}

	cout << "\nMatriz 2 es igual a: \n";

	for (int f = 0; f < 2; f++)
	{
		for (int s = 0; s < 2; s++)
		{
			cout << matriz_2[f][s] << " ";
		}

		cout << "\n";
	}

	cout << "\n\n\nLas 2 matrices son: \n";


	cout << "\nMatriz 1 es igual a: \n";

	for (int f = 0; f < 2; f++)
	{
		for (int s = 0; s < 2; s++)
		{
			cout << matriz_1[f][s] << " ";
		}

		cout << "\n";
	}

	cout << "\nMatriz 2 es igual a: \n";

	for (int f = 0; f < 2; f++)
	
	{
		for (int s = 0; s < 2; s++)
		{
			cout << matriz_2[f][s] << " ";
		}

		cout << "\n";
	}
while (continue_option != 'n'){

cout<<"Quieres sumar '1', restar '2', multiplicar '3' o dividir '4':";
cin>>option;

while (option != '1' && option != '2' && option != '3' && option != '4')
{
	cout<<"\nIngreso un dato inadmitido, por favor ingrese otra vez. \n";
	cout<<"Quieres sumar '1', restar '2', multiplicar '3' o dividir '4':";
	cin>>option;
}

switch (option)
{
	

case '1':
	for (int f = 0; f < 2; f++)
	{
		for (int s = 0; s < 2; s++)
		{
			new_matriz[f][s] = matriz_1[f][s] + matriz_2[f][s];
		}

		cout << "\n";
	}

	break;
case '2':
	for (int f = 0; f < 2; f++)
	{
		for (int s = 0; s < 2; s++)
		{
			new_matriz[f][s] = matriz_1[f][s] - matriz_2[f][s];
		}

		cout << "\n";
	}

	break;
case '3':
	for (int f = 0; f < 2; f++)
	{
		for (int s = 0; s < 2; s++)
		{
			new_matriz[f][s] = matriz_1[f][s] * matriz_2[f][s];
		}

		cout << "\n";
	}

	break;

case '4':
	for (int f = 0; f < 2; f++)
	{
		for (int s = 0; s < 2; s++)
		{
			new_matriz[f][s] = matriz_1[f][s] / matriz_2[f][s];
		}

		cout << "\n";
	}

	break;

default:
cout<<"Algo  salio mal";
	break;	
}	

	for (int f = 0; f < 2; f++)
	{
		for (int s = 0; s < 2; s++)
		{
			cout << new_matriz[f][s] << " ";
		}

		cout << "\n";
	}
	
	do
	{
		cout<<"Continue? (y = Yes, n = Don't)";
		cin>>continue_option;
	} while (continue_option != 'y' && continue_option != 'n');

}
	


return 0;
}
