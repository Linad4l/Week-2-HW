#include <iostream>
using namespace std;

int main()
{
    string NAME;
    string CITY;
    int AGE;
    string COLLEGE;
    string PROFESSION;
    string ANIMAL;
    string PETNAME;
    cout << "Hi! Let's make you a story, What is your name?";
    cin >> NAME;
    cout << "What is your age?";
    cin >> AGE;
    cout << "What city would you live in?";
    cin >> CITY;
    cout << "What college would you attend?";
    cin >> COLLEGE;
    cout << "What would be your profession?";
    cin >> PROFESSION;
    cout << "What is your favorite animal?";
    cin >> ANIMAL;
    cout << "What would you name your pet?";
    cin >> PETNAME;
    cout << "Here is your story: " << endl;
    cout << "   There once was a person named " << NAME << " who lived in " << CITY << "." << " At the age of " << AGE <<", " << NAME << " went to college at " << COLLEGE << ". " << NAME << " graduated and went to work as a " << PROFESSION << "." << " Then, " << NAME << " adopted a(n)" << ANIMAL << " named "<< PETNAME << "." << "They both lived happily ever after!";
    return 0;
}
