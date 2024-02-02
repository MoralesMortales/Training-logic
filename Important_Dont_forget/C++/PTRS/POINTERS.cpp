#include <iostream>


void printInt(int *intToGet){
std::cout<<*intToGet<<std::endl; //consigue un int
}
void printChart(char *CharToGet){
std::cout<<*CharToGet<<std::endl; //consigue un char
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
    char chara = '5';
    int new_val;
    int *puntero = &n;
    std::cout<<*puntero<<std::endl;
    std::cin>>new_val;
    *puntero = new_val;
    std::cout<<*puntero<<"\n\n\n\n";
    
    printInt(&n);
    printChart(&chara);
    
    
    std::cout<<*puntero<<"\n\n\n\n";
    print(&n,'i');
    print(&chara,'c');
    return 0;
}
