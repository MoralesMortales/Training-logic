#include <iostream>

void get_min_max(int numbers[], int size, int *max, int *min){

for (int i = 0; i < size; i++)
{
    if (numbers[i] > *max)
    {
        *max = numbers[i];
    }
    
    else if (numbers[i] < *min)
    {
        *min = numbers[i];
    }
}
}
int main(int argc, char const *argv[])
{
    int luckynumbers[9] = {1,2,3,-7,8,3,41,3,1};
    int *ptr = luckynumbers;
    int max = luckynumbers[0];
    int min = luckynumbers[0];

    get_min_max(luckynumbers,9,&max,&min);
    std::cout<<"El max es: "<<max<<std::endl;
    std::cout<<"El min es: "<<min<<std::endl;
/*     std::cout<<luckynumbers<<std::endl;
    std::cout<<&luckynumbers[2]<<std::endl;
    std::cout<<*luckynumbers<<std::endl;
    std::cout<<*(luckynumbers + 2)<<std::endl;
 */


    return 0;
}
