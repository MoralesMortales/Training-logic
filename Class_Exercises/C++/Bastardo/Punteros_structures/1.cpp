#include <iostream>

using namespace std;

struct A1{

    int n;
    struct A1 * ptr;
};

//grafos -- Arbol binario

void reocorreA1(struct A1 * start){
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
    reocorreA1(root);
    
    return 0;
}

