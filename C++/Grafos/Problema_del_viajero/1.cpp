#include <iostream>
#include <cstdlib>  // Use <cstdlib> instead of <stdlib.h>
#include <ctime>    // Include <ctime> for time function

class punto_mapa {
private:
    static const int SIZE = 6;  // Define the size as a constant
    int coordenada[1][SIZE];
    int paso = 1;

public:
    punto_mapa() {}

    punto_mapa(int options[SIZE]) {
        // Initialize coordenada using options
        for (int i = 0; i < SIZE; ++i) {
            coordenada[0][i] = options[i];
        }
    }

    void asignar() {
        // Implement if needed
    }

    void print() {
        // Print coordenada
        std::cout << "Coordenadas: ";
        for (int i = 0; i < SIZE; ++i) {
            std::cout << coordenada[0][i] << " ";
        }
        std::cout << std::endl;
    }

    void crear_posibilidades() {
        // Implement if needed
    }
};

void crear_opciones(int option[6]) {
    for (int i = 0; i < 6; i++) {
        
        int random_value;
        bool repeated;
        
        do {

            random_value = rand() % 5 + 1; 

            repeated = false;

            for (int j = 0; j < i; j++) {

                if (option[j] == random_value) {

                    repeated = true;

                    break;
                }
            }

        } while (repeated != false); 

        option[i] = random_value;
    }
}

int main() {
    srand(time(0));  // Seed the random number generator

    int option_sites[6];

    crear_opciones(option_sites);

    punto_mapa punto1(option_sites);

    punto1.print();

    return 0;
}
