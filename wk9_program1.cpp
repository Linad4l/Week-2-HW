#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function to get computer choice
int getComputerChoice() {
    return rand() % 3 + 1; // 1–3
}

// Function to display choice as text
string choiceToString(int choice) {
    if (choice == 1) return "Rock";
    else if (choice == 2) return "Paper";
    else return "Scissors";
}

// Function to determine winner
int determineWinner(int user, int computer) {
    if (user == computer) return 0; // tie

    if ((user == 1 && computer == 3) ||
        (user == 3 && computer == 2) ||
        (user == 2 && computer == 1)) {
        return 1; // user wins
    }

    return -1; // computer wins
}

// Function to display result message
void displayResult(int user, int computer, int result) {
    string userStr = choiceToString(user);
    string compStr = choiceToString(computer);

    cout << "\nYou chose: " << userStr << endl;
    cout << "Computer chose: " << compStr << endl << endl;

    if (result == 1) {
        if (user == 1) cout << "Rock smashes Scissors.\n";
        else if (user == 2) cout << "Paper wraps Rock.\n";
        else cout << "Scissors cuts Paper.\n";
        cout << "You win!\n";
    }
    else if (result == -1) {
        if (computer == 1) cout << "Rock smashes Scissors.\n";
        else if (computer == 2) cout << "Paper wraps Rock.\n";
        else cout << "Scissors cuts Paper.\n";
        cout << "Computer wins!\n";
    }
    else {
        cout << "Both players chose " << userStr << ".\n";
        cout << "It is a tie! The game will be played again.\n";
    }
}

// Function to get user input
int getUserChoice() {
    int choice;
    cout << "\nEnter your choice:\n";
    cout << "1. Rock\n2. Paper\n3. Scissors\n";
    cout << "Choice: ";
    cin >> choice;

   
    while (choice < 1 || choice > 3) {
        cout << "Invalid choice. Try again: ";
        cin >> choice;
    }

    return choice;
}

int main() {
    srand(time(0)); 

    cout << "Rock, Paper, Scissors Game\n";

    int result;

    do {
        int userChoice = getUserChoice();
        int computerChoice = getComputerChoice();

        result = determineWinner(userChoice, computerChoice);
        displayResult(userChoice, computerChoice, result);

    } while (result == 0); // repeat if tie

    return 0;
}
