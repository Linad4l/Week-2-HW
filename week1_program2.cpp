
// week1_program2.cpp
// Program 2: Restaurant Bill
// Calculates tax and tip based on a meal charge and prints everything with 2 decimals.

#include <iostream>
#include <iomanip>   // needed for fixed and setprecision
using namespace std;

int main() {
    double mealCost = 88.67;     // base meal cost
    double taxRate = 0.0675;     // 6.75% tax
    double tipRate = 0.20;       // 20% tip (after tax)

    double taxAmount = mealCost * taxRate;          // tax dollars
    double subtotal = mealCost + taxAmount;         // meal + tax
    double tipAmount = subtotal * tipRate;          // tip based on subtotal
    double totalBill = subtotal + tipAmount;        // final total

    // Print money values with 2 decimal places
    cout << fixed << setprecision(2);

    cout << "Meal cost: $" << mealCost << endl;
    cout << "Tax amount: $" << taxAmount << endl;
    cout << "Tip amount: $" << tipAmount << endl;
    cout << "Total bill: $" << totalBill << endl;

    return 0;
}
