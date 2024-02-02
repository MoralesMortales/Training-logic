#include <iostream>
#include <conio.h>
#include <cmath>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int threeToOne(int d2, int d1, int d0)
{
    return d2 * 4 + d1 * 2 + d0 * 1;
}

int prev(int i, int n)
{
    if (i - 1 >= 0)
        return i - 1;
    else
        return n - 1;
}

int next(int i, int n)
{
    return (i + 1) % n;
}

void inicializaEspacioCelular(int espacioCelular[2][80])
{
    for (int fila = 0; fila < 2; fila++)
        for (int columna = 0; columna < 80; columna++)
            espacioCelular[fila][columna] = 0;
    espacioCelular[0][39] = 1;
}

/*

*/

void showInstante(int ticktock, int espacioCelular[2][80])
{
    for (int columna = 0; columna < 80; columna++)
    {
        if (espacioCelular[ticktock][columna])
            cout << '1';
        else
            cout << ' ';
    }
    // cout << endl;
}

void generaInstanteSiguiente(int ticktock, int espacioCelular[2][80], int regla[8])
{
    // ticktock es el instante actual
    //(ticktock +1)%2 es el instante siguiente
    for (int columna = 0; columna < 80; columna++)
    {
        // genera columna del instante siguiente
        espacioCelular[(ticktock + 1) % 2][columna] =
            regla[threeToOne(espacioCelular[ticktock][prev(columna, 80)],
                             espacioCelular[ticktock][columna],
                             espacioCelular[ticktock][next(columna, 80)])];
    }
    // avanza el instante actual
    // ticktock = (ticktock +1)%2;
}

main()
{
    int regla[8] = {0, 1, 1, 1, 1, 0, 0, 0};
    int espacioCelular[2][80];
    int ticktock = 0;
    int ristra[8];
    int rep;
    inicializaEspacioCelular(espacioCelular);

    for (int i = 0, t = 100; t <= 107 && i < 8; i++, t++)
    {
        ristra[i] = espacioCelular[ticktock][39];
        showInstante(ticktock, espacioCelular);
        cout << endl;
        generaInstanteSiguiente(ticktock, espacioCelular, regla);
        ticktock = (ticktock + 1) % 2;
    }

    for (int i = 0, t = 1; i < 8; t++)
    {
        if (ristra[i] == espacioCelular[ticktock][39])
        {
            i++;
            if (i == 8)
            {
                cout << t << "\n";
                
            }
        }
        else
        {
            i = 0;
        }
        generaInstanteSiguiente(ticktock, espacioCelular, regla);
        ticktock = (ticktock + 1) % 2;
    }
    getch();
}

/*
Este c�digo implementa una simulaci�n de un aut�mata celular unidimensional. En particular, se est� utilizando
la regla de Wolfram para el aut�mata celular, que es una forma de regla que determina c�mo evoluciona el estado de cada celda en
funci�n de sus estados vecinos.


threeToOne: Esta funci�n toma tres bits (d2, d1, d0) y los convierte en un n�mero decimal.
Se utiliza para indexar la regla de Wolfram, ya que hay 8 posibles combinaciones de estados vecinos en un aut�mata celular unidimensional.

prev y next: Estas funciones calculan el �ndice de la celda vecina anterior y siguiente, respectivamente,
teniendo en cuenta el hecho de que el aut�mata celular es un anillo (es decir, la primera celda tiene como vecino a la �ltima y viceversa).

inicializaEspacioCelular: Inicializa el espacio del aut�mata celular, que es representado como una matriz bidimensional
(espacioCelular). La primera fila de la matriz representa el estado actual, y la segunda fila representa el pr�ximo estado.
 En este caso, se inicia con todas las celdas en estado 0, excepto la celda en la posici�n central de la segunda fila, que se establece en 1.

showInstante: Muestra en la consola el estado actual del aut�mata celular en un momento dado (representado por ticktock).
 Muestra '1' si la celda est� viva y ' ' (espacio) si est� muerta.

generaInstanteSiguiente: Calcula el siguiente estado del aut�mata celular seg�n la regla de Wolfram. Utiliza la regla
proporcionada como argumento (regla) y actualiza la matriz espacioCelular con el nuevo estado.

main: En la funci�n principal, se define una regla de Wolfram espec�fica (en este caso, la regla 30) y se inicializa el
espacio del aut�mata celular. Luego, se ejecutan 20 iteraciones del aut�mata celular, mostrando cada paso en la consola.

En resumen, el c�digo simula el comportamiento de un aut�mata celular unidimensional utilizando la regla de Wolfram,
mostrando su evoluci�n en la consola a lo largo de varias iteraciones. La regla 30 es conocida por generar patrones complejos y
ca�ticos a partir de estados iniciales simples.
*/
