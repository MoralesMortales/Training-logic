#include <iostream>

int main(int argc, char const *argv[])
{

// 2x2

int matriz_1[2][2] = {{1,2},{3,4}};
int matriz_2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
int matriz_3[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

int matriz_cambiada_1[2][2];
int matriz_cambiada_2[3][3];
int matriz_cambiada_3[4][4];

std::cout<<"Sin cambiar \n";

for (int f = 0; f < 2; f++)
{
   for (int s = 0; s < 2; s++)
{
    std::cout<< matriz_1[f][s] << " ";
}

std::cout<<"\n";
}

std::cout<<"\nCambiada \n";

for (int f = 0; f < 2; f++)
{
   for (int s = 0; s < 2; s++)
{
    std::cout<< matriz_1[s][f] << " ";
}

std::cout<<"\n";
}

std::cout<<"\nSin cambiar \n";

for (int f = 0; f < 3; f++)
{
   for (int s = 0; s < 3; s++)
{
    std::cout<< matriz_2[f][s] << " ";
}

std::cout<<"\n";
}

std::cout<<"\nCambiada \n";

for (int f = 0; f < 3; f++)
{
   for (int s = 0; s < 3; s++)
{
    std::cout<< matriz_2[s][f] << " ";
}

std::cout<<"\n";
}

std::cout<<"\nSin cambiar \n";

for (int f = 0; f < 4; f++)
{
   for (int s = 0; s < 4; s++)
{
    std::cout<< matriz_3[f][s] << " ";
}

std::cout<<"\n";
}

std::cout<<"\nCambiada \n";

for (int f = 0; f < 4; f++)
{
   for (int s = 0; s < 4; s++)
{
    std::cout<< matriz_3[s][f] << " ";
}

std::cout<<"\n";
}
 
return 0;
}
