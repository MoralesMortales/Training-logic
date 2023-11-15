//Se ve como un buscaminas
#include <iostream>
int main(){

char values[15][15];
int limits = 15;
int center = 7;
int range = 3;
int lead;

   for (int f = 0; f < limits; f++)
   {
      for (int s = 0; s < limits; s++)
      {
         values[f][s] = ' ';
      }
   }
   
   std::cout<<"Rango\n";
   std::cin>>lead;
int OP = (lead * 2) + 1;
for (int i = 0; i < lead; i++)
{
 
}

values[center][center]='O';
for (int newe = 1; newe < lead + 1; newe++)
{
   if (lead == 1)
   {
      
    int fnew = center - newe;
    int fnews = fnew;
    values[fnew][fnew]='X';
    
    for (int i = 1; i < ((lead*2)+1); i++)
    {
      values[fnew + i][fnews]='X';
      values[fnews][fnew + i]='X';
    }
    
    for (int i = 1; i < ((lead*2)+1); i++)
    {
      values[fnew + i][fnews]='X';
      values[fnews][fnew + i]='X';
    }
    
   
}



 
}



   for (int f = 0; f < limits; f++)
   {
      for (int s = 0; s < limits; s++)
      {
         std::cout<<"["<<values[f][s]<<"]";
         if (s == 14)
         {
            std::cout<<"\n";
         }
         
      }
   }

    return 0;
}