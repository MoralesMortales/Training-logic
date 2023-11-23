/* [X] [ ] [X] [ ]
   [ ] [X] [ ] [X]
   [O] [ ] [O] [ ]
   [ ] [O] [ ] [O]
 */

#include <iostream>

int main()
{
   int a;
   int vueltas = 0;
   char vals[4] = {'W','X','Y','Z'};
   char content[12][12];

   //crea los espacios
   for (int f = 0; f < 12; f++)
   {
      for (int s = 0; s < 12; s++)
      {
         content[f][s] = ' ';
      }
   }

  //Cumple las condiciones
   while (vueltas < 12)
   {
      if (vueltas == 0)
      {
         for (int s = 0; s < 12; s++)
         {
            int f;

            if (f == 0 || f == 1)
            {
               content[f][s] = vals[0];
               f++;
            }

            else if (f == 2)
            {
               content[f][s] = vals[0];
               f = f - 2;
            }

            else
            {
               f = 0;
               content[f][s] = vals[0];
               f++;
            }
         }
      }

      else if (vueltas == 1)
      {
         for (int s = 0; s < 12; s++)
         {
            int f;

            if (f == 3 || f == 4)
            {
               content[f][s] =  vals[1];
               f++;
            }

            else
            {
               content[f][s] =  vals[1];
               f = f - 2;
            }
         }
      }


      vueltas++;
   }


   for (int f = 0; f < 12; f++)
   {
      for (int s = 0; s < 12; s++)
      {
         std::cout << "[" << content[f][s] << "]";
         if (s == 11)
         {
            std::cout << "\n";
         }
      }
   }

std::cin>>a;

   return 0;
}
