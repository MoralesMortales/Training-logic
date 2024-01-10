#include <vector>
#include <iostream>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(0));

    bool ready = false;
    int spaces, numbersToChoose;
    char option_numbers;

    std::vector<int> values;
    std::cout << "How many spaces would you like to have? (1-10): ";
    std::cin >> spaces;

    while (spaces <= 0 || spaces > 10)
    {
        std::cout << "Error, the amount is not right"<<std::endl;
        std::cout << "How many spaces would you like to have? (1-10): ";
        std::cin >> spaces;
    }
    std::cout << "Do you want to choose your numbers? (y/n): ";

    while (option_numbers != 'n' && option_numbers != 'y')
    {
        std::cin >> option_numbers;

        if (option_numbers == 'y')
        {
            std::cout << "Perfect\n";
        }

        else if (option_numbers == 'n')
        {
            std::cout << "Got it.\n";
        }

        else
        {
            std::cout << "Invalid option\n";
            std::cout << "Tell us, do you want to choose your numbers? (y/n): ";
        }
    }

    if (option_numbers == 'n')
    {
        for (int fill = 0; fill < spaces; fill++)
        {
            int number_random = rand() % 10 + 1;
            values.push_back(number_random);
        }
    }

    else
    {

        for (int fill = 0; fill < spaces; fill++)
        {
            std::cout << "Choose for " << fill << ": ";
            std::cin >> numbersToChoose;
            values.push_back(numbersToChoose);
        }
    }
    for (auto n : values)
    {
        std::cout << n << std::endl;
    }

    std::cout << "What is the target? " << std::endl;
    int target;
    std::cin >> target;

TODO:

    while(ready == false){
        
        int vals_analize, vals_analize_into;

        for (auto it = values.begin(); it != values.end(); it++)
        {
            vals_analize = *it;

            for (auto it2 = values.begin(); it2 != values.end(); it2++)
        {
            vals_analize_into = vals_analize + *(it2 + 1); 
        
            if (vals_analize_into == target)
            {
            
                std::cout<<"Success\n";
                std::cout<<vals_analize_into-vals_analize<<" "<<vals_analize<<std::endl;
                ready = true;
                break;
                
            }

            else
            {
                
            }
            

        }

            if (ready == true)
            {
                break;
            }
            
        }

    if (ready == true)
    {
        std::cout<<"\nGracias por usar\n\n";
    }
    
    else{
        std::cout<<"\nNo es posible encontrar ese valor\n";
        std::cout<<"\nGracias por usar\n";
        break;
        
    }

    }

    return 0;
}
