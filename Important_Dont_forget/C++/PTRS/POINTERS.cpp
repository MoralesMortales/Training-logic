#include <iostream>


void printInt(int *intToGet){
std::cout<<*intToGet<<std::endl;
}
void printChart(char *CharToGet){
    

}
void print(void *anyVar, char type){
    switch (type)
    {
    case 'i': std::cout<<(*(int*)anyVar)<<std::endl; 
        break;
    case 'c': std::cout<<(*(char*)anyVar)<<std::endl; 
        break;
    default:
        break;
    }
}

int main(int argc, char const *argv[])
{
    int n = 9;
    char o = '5';
    int new_val;
    int *puntero = &n;
    std::cout<<*puntero<<std::endl;
    std::cin>>new_val;
    *puntero = new_val;
    std::cout<<*puntero<<"\n\n\n\n";
    
    printInt(&n);
    printChart(&o);
    
    
    std::cout<<*puntero<<"\n\n\n\n";
    print(&n,'i');
    print(&o,'c');
    return 0;
}
