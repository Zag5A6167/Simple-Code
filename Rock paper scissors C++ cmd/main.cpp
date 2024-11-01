#include <iostream>
#include <limits>
#include<ctime>

using namespace std;

int main() {
    srand(time(0));
    int choice;
    int botChoice;

    do {
        
        cout << "1. Rock\n";
        cout << "2. Paper\n";
        cout << "3. Scissors\n";
        cout << "4. Exit\n";

        while (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number: ";
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        }

        botChoice = rand() % 3 + 1;
        switch (choice) {
            case 1:
                cout << "Rock\n";
                break;
            case 2:
                cout << "Paper\n";
                break;
            case 3:
                cout << "Scissors\n";
                break;
            default:
                cout << "Please try again\n";
        }

        if (choice == botChoice) {
            cout << "It's a tie!\n";
        } else if ((choice == 1 && botChoice == 3) ||
                   (choice == 2 && botChoice == 1) ||
                   (choice == 3 && botChoice == 2)) {
            cout << "You win!\n";
        } else {
            cout << "Computer wins!\n";
        }


    } while (choice != 4);

    return 0;
}