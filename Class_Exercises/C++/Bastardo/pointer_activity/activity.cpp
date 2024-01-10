

#include <iostream>
using namespace std;

struct box
{
    int content;
    struct box *pointer;
};

void printAll(struct box *pointerbase)
{

    struct box *nptr = pointerbase;
    struct box *newptr;

    if (pointerbase != NULL)
    {

        do
        {
            cout << nptr->content << " | ";

            if (nptr->content > 0)
            {
                int var = nptr->content;
                newptr = new box;
                newptr->pointer = nptr -> pointer;
                nptr -> pointer = newptr;
                newptr->content = (var) * (-1);
                cout << newptr->content << " | ";
            }

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

    return 0;
}
