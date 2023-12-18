#include <iostream>
#include <fstream>

int main()
{
    int box_1, box_2, option1, option2;
    char option;

    std::cout << "Creemos una tabla de 2 valores" << std::endl;
    std::cout << "Caja 1:";
    std::cin >> box_1;
    std::cout << "Caja 2:";
    std::cin >> box_2;

    int **table = new int *[box_1];
    for (int i = 0; i < box_1; i++)
    {
        table[i] = new int[box_2];
    }

    for (int i = 0; i < box_1; i++)
    {
        for (int o = 0; o < box_2; o++)
        {
            table[i][o] = i;
        }
    }

    std::cout << "La tabla es de [" << box_1 << "] [" << box_2 << "]" << std::endl;
    std::cout << "Quieres guardar algun dato?" << std::endl;
    std::cout << "y / n: ";
    std::cin >> option;
    option = tolower(option);
    while (option != 'n' && option != 'y')
    {
        std::cout << "Opcion no valida.\n\n";
        std::cout << "Quieres guardar algun dato?" << std::endl;
        std::cout << "y / n: ";
        std::cin >> option;
        option = tolower(option);
    }

    if (option == 'n')
    {
        std::cout << "Gracias por usar\n";
        for (int i = 0; i < box_1; i++)
        {
            delete[] table[i];
        }

        delete[] table;
        return 0;
    }

    std::cout << "En que casilla?: ";
    std::cout << "La tabla es de [" << box_1 << "] [" << box_2 << "]: ";
    std::cin >> option1 >> option2;
    while (!(0 <= option1 && option1 <= box_1) || !(0 <= option2 && option2 <= box_2))
    {
        std::cout << "Error\n\n";
        std::cout << "En que casilla?: ";
        std::cout << "La tabla es de [" << box_1 << "] [" << box_2 << "]: \n";
        std::cin >> option1 >> option2;
    }

    std::cout << "Estas guardando en [" << option1 << "] [" << option2 << "]. \n";
    std::cout << "Que guardaras?: ";
    std::cin >> table[option1-1][option2-1];
    std::cout << "fin programa";

    std::ofstream outputFile("output.txt");

    for (int i = 0; i < box_1; i++)
    {
        for (int o = 0; o < box_2; o++)
        {
            outputFile << "table [" << i << "] [" << o << "] = " << table[i][o] << std::endl;
            ;
        }
    }

    outputFile.close();

    for (int i = 0; i < box_1; i++)
    {
        delete[] table[i];
    }

    delete[] table;
    return 0;

    return 0;
}
