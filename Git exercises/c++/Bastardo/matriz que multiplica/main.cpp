/*
[][]   ==> [][]
[][]       [][]
 */

#include <iostream>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{

    srand(time(0));

    int conjunto_1[2][2];
    int conjunto_2[2][2];

    int new_conjunto_1[2][2];
    int new_conjunto_2[2][2];

    for (int f = 0; f < 2; f++)
    {

        for (int s = 0; s < 2; s++)
        {
            conjunto_1[f][s] = rand() % 9;
            std::cout << "[" << conjunto_1[f][s] << "]";
        }

        std::cout << " ";

        for (int s = 0; s < 2; s++)
        {
            conjunto_2[f][s] = rand() % 100;
            std::cout << "[" << conjunto_2[f][s] << "]";
        }

        std::cout << "\n";
    }

    std::cout << "\n Continuation \n";

    for (int f = 0; f < 2; f++)
    {

        for (int s = 0; s < 2; s++)
        {
            new_conjunto_1[f][s] = 0;
        }

        new_conjunto_1[0][0] = conjunto_1[0][0];
        new_conjunto_1[1][0] = conjunto_1[0][1];
    }

    for (int f = 0; f < 2; f++)
    {

        for (int s = 0; s < 2; s++)
        {
            std::cout << "[" << new_conjunto_1[f][s] << "]";
        }

        std::cout<<"\n";
    }

    return 0;
}

/* #include <iostream>
#include <iomanip> // For setw
 */
/* int main() {
    int conjunto_1[2][2] = {{0, 0}, {0, 0}};
    int conjunto_2[2][2] = {{8, 100}, {8, 8}};

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::cout << "[" << std::setw(3) << conjunto_1[i][j] << "]";
        }

        std::cout << "  "; // Space between matrices

        for (int j = 0; j < 2; ++j) {
            std::cout << "[" << std::setw(3) << conjunto_2[i][j] << "]";
        }

        std::cout << "\n"; // Newline after each row
    }

    return 0;
}
 */