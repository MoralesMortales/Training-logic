#include <iostream>

int main() {
    int N = 13; // Cambié la constante a una variable
    int arreglo[N][N];

    int valor = 1;
    int i, j;

    // Colocar el 0 en el centro
    i = N / 2;
    j = N / 2;
    arreglo[i][j] = 0;

    // Generar anillos
    for (int anillo = 1; anillo <= N / 2; ++anillo) {
        // Arriba
        for (int k = 1; k <= anillo * 2; ++k) {
            arreglo[i - anillo][j - anillo + k] = valor;
        }

        // Derecha
        for (int k = 1; k <= anillo * 2; ++k) {
            arreglo[i - anillo + k][j + anillo] = valor;
        }

        // Abajo
        for (int k = 1; k <= anillo * 2; ++k) {
            arreglo[i + anillo][j + anillo - k] = valor;
        }

        // Izquierda
        for (int k = 1; k <= anillo * 2; ++k) {
            arreglo[i + anillo - k][j - anillo] = valor;
        }

        // Incrementar el valor para el siguiente anillo
        ++valor;
    }

    // Imprimir el arreglo resultante
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cout<< "[" << arreglo[i][j] << "]";
        }
        std::cout << "\n";
    }

    return 0;
}
