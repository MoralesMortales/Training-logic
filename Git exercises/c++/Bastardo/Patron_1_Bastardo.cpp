#include <iostream>

int main(){
    char content[12][12];
    for (int f = 0; f < 12; f++){
            for (int s = 0; s < 12; s++){
                content[f][s] = ' ';
                std::cout<<"["<<content[f][s]<<"]";
                if (s == 11){
                std::cout<<"\n";
                }
}
}


return 0;
}
