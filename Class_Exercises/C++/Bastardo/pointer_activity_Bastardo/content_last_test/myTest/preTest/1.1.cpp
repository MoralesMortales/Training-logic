#include <iostream>

    struct box{

        int content;
        struct box *column;
        struct box *row;
        struct box *pointer;

    }; 

void createBox(box *root, int size){

box* nptr = root;
box* sptr = nptr -> pointer;
int counter = 0;

nptr = new box;

for (int f = 1; f < size + 1; f++)
{
    for (int s = 1; s < size + 1; s++)
    {
    nptr -> content = counter;
    nptr -> row = new box;
    nptr->row = nptr ->row;
    counter++;   
    }

nptr -> content = counter;
nptr -> column = new box;
nptr = nptr -> column;
}
    };

int main(int argc, char const *argv[])
{
 
 while (nptr = )
 {
    
 }
 
    return 0;
}
