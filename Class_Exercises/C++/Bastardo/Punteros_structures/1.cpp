#include <iostream>

using namespace std;

struct A1{

    int n;
    struct A1 * ptr;
};

//grafos -- Arbol binario

void recorreA1(struct A1 * start){
    struct A1 *sptr = start;
    if (start != NULL)
    {
        do
        {
            cout << sptr -> n << " ";
            sptr = sptr -> ptr;
        } while (sptr != start);
    
    cout<<endl;
     
}
}

int ubicarValor(struct A1 *start,  int valor, struct A1 * & ptrRet){
//buscar un valor dentro del anillo
//retorna 1 si el valor esta en el anillo, si no 0
//Si esta en el anillo el parametro ptrRet apunta a la estructura que contiene al valor

}

int main(int argc, char const *argv[])
{
    struct A1 *root, *sptr, *ptrRet;
    {
       int resultados;


       root = new A1;

       root -> n = 0;

       sptr = root;

       //inserta valores de 1 a 9
    };

    for (int i = 0; i < 10; i++)
    {
        sptr -> ptr = new A1;
        sptr = sptr -> ptr;
        sptr -> n = i;
    }
    
    //forma anillo

    sptr -> ptr = root;
    recorreA1(root);
    
    return 0;
}

