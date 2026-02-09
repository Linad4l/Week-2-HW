#include <iostream>
using namespace std;

int main()
{
    double gallons;
    double miles;
    cout << "How many gallons of gas does your car hold?";
    cin >> gallons;
    cout << "How many miles can your car drive on a full tank?";
    cin >> miles;
    cout << "Your car's gas mileage is: " <<miles/gallons;
    return 0;
}
