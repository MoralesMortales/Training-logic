#include <iostream>
using namespace std; //complete by CML

struct box
{
    int content;
    struct box *pointer;
};

void insertAll(struct box *pointerbase){
    struct box *nptr = pointerbase;
    struct box *sptr = pointerbase;

if (pointerbase != NULL)
{
    do
    {
        nptr = nptr -> pointer;

        if (nptr -> content > 0)
        {
            int var = nptr -> content;
            sptr = nptr -> pointer;
            nptr -> pointer = new box;
            nptr = nptr -> pointer;
            nptr -> content = var * -1;
            nptr -> pointer = sptr;

        }
        
    } while (nptr -> content != -9);

}

nptr -> pointer = pointerbase;

}

void deleteValues(struct box *pointerbase){

    struct box *nptr = pointerbase;
    struct box *sptr = pointerbase;

if (pointerbase != NULL)
{
        nptr = nptr -> pointer;
    do
    {

        if (nptr -> content > 0)
        {
            sptr -> pointer = nptr -> pointer;
            delete nptr;
            nptr = sptr -> pointer;

        }

        else{
            sptr = nptr;
            nptr = sptr -> pointer;
        }
        
    } while (nptr -> content != -9);

}

nptr -> pointer = pointerbase;

}

void printAll(struct box *pointerbase)
{
    struct box *nptr = pointerbase;

    if (pointerbase != NULL)
    {


        do
        {
            cout << nptr->content << " | ";
            nptr = nptr->pointer;

        } while (nptr != pointerbase);
    }

    cout << "Fin\n";
};

int main()
{
    struct box *nptr, *root;

    root = new box;
    root->content = 0;

    nptr = root;

    for (int i = 1; i < 10; i++)
    {
        nptr->pointer = new box;
        nptr = nptr->pointer;
        nptr->content = i;

    }

    nptr->pointer = root;

    printAll(root);
    insertAll(root);
    printAll(root);
    deleteValues(root);
    printAll(root);


    return 0;
}
