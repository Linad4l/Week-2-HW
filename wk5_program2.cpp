#include <iostream>
#include <string>
using namespace std;

int main()
{
    string vegetarian, vegan, glutenFree;

    cout << "Is anyone in your party a vegetarian? ";
    cin >> vegetarian;

    cout << "Is anyone in your party a vegan? ";
    cin >> vegan;

    cout << "Is anyone in your party gluten-free? ";
    cin >> glutenFree;

    cout << endl;
    cout << "Here are your restaurant choices:" << endl;

    if (vegetarian == "no" && vegan == "no" && glutenFree == "no")
        cout << "Joe's Gourmet Burgers" << endl;

    if (vegan == "no")
        cout << "Main Street Pizza Company" << endl;

    cout << "Corner Cafe" << endl;

    if (vegan == "no" && glutenFree == "no")
        cout << "Mama's Fine Italian" << endl;

    cout << "The Chef's Kitchen" << endl;

    return 0;
}
