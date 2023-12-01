#include <iostream>
#include <string>

  struct SmartPhone
    {
        std::string name;
        int storage;
        int price;
        std::string color;

    };

void Print_smartPhone_Info(SmartPhone phone){
    std::cout<<phone.name<<"\n";
    std::cout<<phone.storage<<"\n";
    std::cout<<phone.color<<"\n";
    std::cout<<phone.price<<"\n\n";
    
}

int main()
{

    SmartPhone Sansung_A1;
    SmartPhone Sansung_A2;

    Sansung_A1.name = "Sansung_A1";
    Sansung_A1.storage = 32;
    Sansung_A1.color = "Gray";
    Sansung_A1.price = 999;

    Sansung_A2.name = "Sansung_A2";
    Sansung_A2.storage = 84;
    Sansung_A2.color = "White";
    Sansung_A2.price = 5000;

    Print_smartPhone_Info(Sansung_A1);
    Print_smartPhone_Info(Sansung_A2);

    return 0;
}
