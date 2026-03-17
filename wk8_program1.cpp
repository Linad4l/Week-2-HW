#include <iostream>
#include <iomanip>   
using namespace std;

// Function 
double calculateRetail(double wholesaleCost, double markupPercent);

int main()
{
    double wholesaleCost;
    double markupPercent;
    double retailPrice;

    cout << "Markup Calculator" << endl;
    cout << "-------------------------" << endl;

    cout << "Enter the item's wholesale cost: ";
    cin >> wholesaleCost;

//validate input (only positive)
    while (wholesaleCost < 0)
    {
        cout << "Invalid input. Wholesale cost cannot be negative." << endl;
        cout << "Enter the item's wholesale cost: ";
        cin >> wholesaleCost;
    }

    cout << endl;

    cout << "Enter the item's markup percentage: ";
    cin >> markupPercent;

    while (markupPercent < 0)
    {
        cout << "Invalid input. Markup percentage cannot be negative." << endl;
        cout << "Enter the item's markup percentage: ";
        cin >> markupPercent;
    }

    cout << endl;

    // Call function to calculate retail price
    retailPrice = calculateRetail(wholesaleCost, markupPercent);

    // Display result with 2 decimals
    cout << fixed << setprecision(2);
    cout << "The retail price of the item is: $" << retailPrice << endl;

    return 0;
}


// Function definition
// Calculates retail price based on wholesale cost and markup percentage
double calculateRetail(double wholesaleCost, double markupPercent)
{
    double retail;

    retail = wholesaleCost + (wholesaleCost * markupPercent / 100);

    return retail;
}
