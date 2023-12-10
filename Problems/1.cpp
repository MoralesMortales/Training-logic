/* 1. Two Sum
Easy
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.



Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]


Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.


Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity? */

#include <iostream>
#include <time.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n;
    bool is_right = false;
    char option_numbers;

    srand(time(0));

    while (is_right == false)
    {

        std::cout << "How many spaces has the array?: ";
        std::cin >> n;
        if (n > 0 && n <= 10)
        {
            is_right = true;
        }
        else
        {
            std::cout << "Something didn't works. Choose a number beetween 0 and 10\n";
        }
    }

    int array[n];

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

    if (option_numbers == 'y')
    {
        for (int i = 0; i < n; i++)
        {
            array[i] = rand() % 10 + 1;
        }
    }

    else
    {
        for (int i = 0; i < n; i++)
        {
            int new_val;
            std::cout << "Choose a value for the space " << i << " in array: ";
            std::cin >> new_val;
            array[i] = new_val;
        }
    }

    std::cout << "your array is: \n";
    for (int i = 0; i < n; i++)
    {
        std::cout << array[i] << "\n";
    }

    int target;
    std::cout<<"What is your target?: ";
    std::cin>>target;

    for (int i = 0; i < n; i++)
    {
        //continue
    }
    

    return 0;
}
