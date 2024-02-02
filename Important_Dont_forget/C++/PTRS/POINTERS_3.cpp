#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

int size;
cout<<"Espacio: ";
cin>>size;

int *ptr_matriz = new int[size];
for (int i = 0; i < size; i++)
{
    cout<<"\nValue for "<<i<<endl;
    cin>>ptr_matriz[i];

}

for (int i = 0; i < size; i++)
{
    cout<<"\n "<<*(ptr_matriz+i)<<" "<<endl;

}

delete[] ptr_matriz;
ptr_matriz = NULL;

    return 0;
}
