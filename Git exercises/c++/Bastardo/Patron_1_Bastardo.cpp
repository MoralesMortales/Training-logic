/* [X] [ ] [X] [ ] 
   [ ] [X] [ ] [X] 
   [O] [ ] [O] [ ]
   [ ] [O] [ ] [O]  
 */

#include <iostream>

int main(){
 int a;
    char content[12][12];
    for (int f = 0; f < 12; f++){
            for (int s = 0; s < 12; s++){
                content[f][s] = ' ';
}
}

            for (int s = 0; s < 12; s++){
            int f;

            if (f == 0 || f == 1)
            {
               content[f][s] = 'X';
               f++;
            }

            else if (f == 2)
            {
               content[f][s] = 'X';
               f = f - 2;
            }
            
            else{
               f = 0;
               content[f][s] = 'X';
               f++;

            }

            }

  for (int f = 0; f < 12; f++){
            for (int s = 0; s < 12; s++){
                std::cout<<"["<<content[f][s]<<"]";
                if (s == 11){
                std::cout<<"\n";
                }
}
}

return 0;
}
