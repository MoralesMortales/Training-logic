#include <iostream>
#include <string>

struct SmartPhone
{
    std::string name;
    int storage;
    int price;
    std::string color;
};

struct Person
{
    std::string name;
    int age;
    SmartPhone phone;
};

void Print_smartPhone_Info(SmartPhone phone)
{
    std::cout << phone.name << "\n";
    std::cout << phone.storage << "\n";
    std::cout << phone.color << "\n";
    std::cout << phone.price << "\n\n";
}

void Print_person_Info(Person the_subject, SmartPhone the_smartphone)
{
    std::cout << the_subject.name << "\n";
    std::cout << the_subject.age << "\n";
    std::cout << the_smartphone.name << "\n";
    std::cout << the_smartphone.price << "\n\n";
}

int main()
{

    Person Karla;
    Person Johny;
    SmartPhone Sansung_A1;
    SmartPhone Sansung_A2;
    SmartPhone Sansung_A3;
    SmartPhone Nokia_Pro;

    Sansung_A1.name = "Sansung_A1";
    Sansung_A1.storage = 32;
    Sansung_A1.color = "Gray";
    Sansung_A1.price = 999;

    Sansung_A2.name = "Sansung_A2";
    Sansung_A2.storage = 84;
    Sansung_A2.color = "White";
    Sansung_A2.price = 5000;

    Sansung_A3.name = "Sansung_A3";
    Sansung_A3.storage = 300;
    Sansung_A3.color = "Red";
    Sansung_A3.price = 9999;

    Nokia_Pro.name = "Nokia Pro Ultimate";
    Nokia_Pro.storage = 999999;
    Nokia_Pro.color = "Unknow";
    Nokia_Pro.price = 999999;

    Karla.name = "Karla";
    Karla.age = 31;
    Karla.phone = Sansung_A2;

    Johny.name = "Johny";
    Johny.age = 11;
    Johny.phone = Nokia_Pro;

    Print_smartPhone_Info(Sansung_A1);
    Print_smartPhone_Info(Sansung_A2);
    Print_smartPhone_Info(Sansung_A3);
    Print_person_Info(Karla, Karla.phone);
    Print_person_Info(Johny, Johny.phone);
    return 0;
}
