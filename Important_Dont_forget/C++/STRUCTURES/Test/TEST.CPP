#include <iostream>
#include <string>

struct Question
{
    std::string message;
    std::string questions[3];
    int answer;
};

struct User
{
    std::string name;
    int Tries = 0;
    int chosen_option;
};

void print_question(Question quiestionation)
{
    std::cout << quiestionation.message;
    std::cout << quiestionation.questions[0];
    std::cout << quiestionation.questions[1];
    std::cout << quiestionation.questions[2];
}

int main(int argc, char const *argv[])
{

    Question question[5];

    question[0].message = "\nWhat's bigger?\n";
    question[0].questions[0] = "1. 1\n";
    question[0].questions[1] = "2. 2\n";
    question[0].questions[2] = "3. 3\n\n";
    question[0].answer = 3;

    question[1].message = "What's the main color of an apple?\n";
    question[1].questions[0] = "1. Red\n";
    question[1].questions[1] = "2. Yellow\n";
    question[1].questions[2] = "3. Blue\n\n";
    question[1].answer = 1;

    question[2].message = "Who is not a family member?\n";
    question[2].questions[0] = "1. Neigbour\n";
    question[2].questions[1] = "2. Dad\n";
    question[2].questions[2] = "3. Gramma\n\n";
    question[2].answer = 1;

    question[3].message = "What's smaller?\n";
    question[3].questions[0] = "1. Spain\n";
    question[3].questions[1] = "2. Vaticano's City\n";
    question[3].questions[2] = "3. USA\n\n";
    question[3].answer = 2;

    question[4].message = "What's not a correct spanish sentece?\n";
    question[4].questions[0] = "1. Los gatos son peludos\n";
    question[4].questions[1] = "2. El elefantes son corre rapido\n";
    question[4].questions[2] = "3. Los edificios son bastante viejos\n\n";
    question[4].answer = 2;

    std::string player;
    std::cout << "What's your name?: ";
    std::cin >> player;

    User Current_user;

    Current_user.name = player;

    for (int i = 0; i < 5; i++)
    {
        print_question(question[i]);
        std::cin >> Current_user.chosen_option;
        if (Current_user.chosen_option == question[i].answer)
        {
            std::cout << "RIGHT\n";
            Current_user.Tries++;
        }

        else
        {
            std::cout << "WRONG\n";
        }
    }

    std::cout << "Game over " << Current_user.name << ". Your score is " << Current_user.Tries << ".\nTHANKS FOR PLAY\n";

    return 0;
}
