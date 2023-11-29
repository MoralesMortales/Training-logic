#include <iostream>
#include <list>
#include <algorithm>

std::ostream &operator<<(std::ostream &os, const std::list<std::string> &lista)
{
    for (const auto &elemento : lista) {
        os << elemento << std::endl;
    }
    return os;
}

int main()
{
    std::list<std::string> lista = {"2", "4", "3", "2", "1", "3", "2", "1", "3", "2", "1", "3"};

    // Ordenar la lista y eliminar duplicados
    lista.sort();
    lista.unique();

    std::cout << lista;

    return 0;
}
