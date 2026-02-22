#include <iostream>
#include <string>
using namespace std;

int main() {
    string answer;

    cout << "Reboot the computer and try to connect." << endl;
    cout << "Did that fix the problem? ";
    getline(cin, answer);

    if (answer == "yes") {
        return 0;
    }

    cout << "Reboot the router and try to connect." << endl;
    cout << "Did that fix the problem? ";
    getline(cin, answer);

    if (answer == "yes") {
        return 0;
    }

    cout << "Make sure the cables between the router and modem are plugged in firmly." << endl;
    cout << "Did that fix the problem? ";
    getline(cin, answer);

    if (answer == "yes") {
        return 0;
    }

    cout << "Move the router to a new location." << endl;
    cout << "Did that fix the problem? ";
    getline(cin, answer);

    if (answer == "yes") {
        return 0;
    }

    cout << "Get a new router." << endl;

    return 0;
}
