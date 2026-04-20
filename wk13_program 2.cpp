#include <iostream>
using namespace std;

//define function to reverse order of string
void reverse(char str[]) {
    int n = 0;
//first determine lenght of string
    while (str[n] != '\0') {
        n++;
    }
//print string backwards into str[]
    for (int i = n - 1; i >= 0; i--) {
        cout << str[i];
    }
}

int main() {
    char input[100];

    cout << "Enter a string: ";
    cin.getline(input, 100);

    cout << "The string backwards is ";
    reverse(input);
    cout << "." << endl;

    return 0;
} 
