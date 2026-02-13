#include <iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout << "Enter number 1: ";
    cin>>num1;
    cout << "Enter number 2: ";
    cin>>num2;
    int larger = (num1>num2) ? num1:num2;
    int smaller = (num2>num1) ? num1: num2;
    
    if (num1==num2)
    {
        cout << "The numbers are equal" <<endl;
    }
    else
    {
        cout << larger << " is larger" << endl;
        cout << smaller << " is smaller" << endl;
    }
    return 0;
}
