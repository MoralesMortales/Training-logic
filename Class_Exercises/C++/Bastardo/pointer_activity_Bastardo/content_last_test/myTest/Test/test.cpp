#include <iostream>
using namespace std;

struct box{
int n;
box* pointer;

};


struct box* createCola(){

struct box *home;

home = new box;

home -> n = 0;

home -> pointer = NULL;

return home;

}

void encolar(struct box* home, int value){
struct box* nptr = home;
nptr -> pointer = new box;
nptr = nptr -> pointer;
nptr -> n = value;
nptr -> pointer = NULL;

}

bool desencolar(struct box* &home){
struct box* &nptr = home;
struct box* sptr = home;
bool resultado;

if (sptr -> pointer != NULL){

nptr = nptr -> pointer;

sptr = nptr;

delete sptr;

nptr = nptr -> pointer;

resultado = true;

return resultado;

}

resultado = false;
return resultado;

}

void showCola(struct box* home){
struct box* nptr = home;

    do
    {
        cout<<nptr -> n <<" | ";   

        if (nptr -> pointer != NULL)
        {
            nptr = nptr -> pointer;
        }
    
    } while (nptr -> pointer != NULL);
    
}

int main()
{

struct box* head;
head = createCola();
showCola(head);
encolar(head,90);
showCola(head);
encolar(head,90);
showCola(head);


    return 0;

}
