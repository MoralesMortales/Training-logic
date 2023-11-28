// Se ve como un buscaminas
#include <iostream>
int main()
{

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

   std::cout << "Rango\n";
   std::cin >> lead;



   values[center][center] = 'O';
   for (int newe = 1; newe < lead + 1; newe++)
   {

      int formula = ((lead * 2) + 1);
      if (lead == 1)
      {

         int fnew = (center - newe);
         int fnews = fnew;

         std::cout << "1 Fnew es = a ";
         std::cout << fnew;

         values[fnew][fnew] = 'X';

         for (int i = 1; i < formula; i++)
         {
            std::cout << "Fnew es = a ";
            std::cout << fnew;
            values[fnew + i][fnews] = 'X';
            values[fnews][fnew + i] = 'X';
            std::cout << i << "\n";
            std::cout << fnew << "\n";
            if /*-->*/((i + fnew) == (lead * 2) + 1)
            {
               std::cout << "vvvvvvvv";
               int ii = i;
               for (int vi = ii; vi <= formula; vi++)
               {
                  for (int rest = 0; rest < 2; rest++)
                  {
                     values[4][fnews - rest] = 'u';
                     values[fnews - rest][4] = 'u';
                  }
               }

               values[fnew + i][fnews] = 'X';
            }
         }
      }
   }

   for (int f = 0; f < limits; f++)
   {
      for (int s = 0; s < limits; s++)
      {
         std::cout << "[" << values[f][s] << "]";
         if (s == 14)
         {
            std::cout << "\n";
         }
      }
   }

   return 0;
}
