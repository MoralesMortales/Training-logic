#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
int row, col;
cout << "rows, cols" << endl;
cin >> row >> col;

int **table = new int* [row];

for (int i = 0; i < row; i++)
{
    table[i] = new int[col];
}

table[1][2] = 20;

cout << table[1][2] << endl;

for (int i = 0; i < row; i++)
{
    delete[] table[i];
}

delete[] table;
table = NULL;

    return 0;
}
