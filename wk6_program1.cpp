#include <iostream>
using namespace std;

int main()
{
    int number;        
    int sum = 0;       

    cout << "Enter a positive integer: ";
    cin >> number;

    while (number < 0)
    {
        cout << "Invalid input. Please enter a positive integer." << endl;
        cout << "Enter a positive integer: ";
        cin >> number;
    }
    
    for (int i = 1; i <= number; i++)
    {
        sum += i;  
    }

    cout << "The sum of the integers from 1 to "
         << number << " is " << sum << "." << endl;

    return 0;  
}
