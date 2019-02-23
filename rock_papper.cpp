//Farhan Azad 9/25/2018
#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

const int ROCK = 1;
const int PAPER = 2;
const int SCISSORS = 3;
int main()
{
    unsigned seed;
    int uChoice;
    int cChoice;
    bool showResult = true;
    srand(static_cast<unsigned>(time(0)));


    cChoice = 1 + rand()%3;

    cout<<"Enter you choice, '1- rock', '2- paper', or '3-scissors'\n";
    cin >> uChoice;

    if (showResult == true)
    {
        if (cChoice == ROCK)
            cout << "CPU has chosen Rock." << endl;

        if (cChoice == PAPER)
            cout << "CPU has chosen paper."<< endl;

        if (cChoice == SCISSORS)
            cout << "CPU has chosen scissors." << endl;
    }


    if ((uChoice == ROCK && cChoice == SCISSORS) || (uChoice == SCISSORS && cChoice== ROCK))
    {
        cout<<"The rock smashes the scissors.\n";
        if (uChoice == ROCK)
            cout << "Player 1 wins!";
        else
            cout << "CPU wins!";
    }

    else if ((uChoice == SCISSORS && cChoice == PAPER) || (uChoice == PAPER && cChoice == SCISSORS))
    {
        cout<< "Scissors cuts paper.\n";
        if (uChoice == SCISSORS)
            cout << "Player 1 wins!";
        else
            cout << "CPU wins!";
    }

    else if ((uChoice == PAPER && cChoice == ROCK) || (uChoice == ROCK && cChoice == PAPER))
    {
        cout<<"Paper wraps rock.\n";
        if (uChoice == PAPER)
            cout << "Player 1 wins!";
        else
            cout << "CPU wins!";
    }

    else
        cout<< "it is a draw.";

    return 0;
}
