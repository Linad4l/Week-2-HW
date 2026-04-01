#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int MONTHS = 12;

    // Array to store rainfall per moth
    double rainfall[MONTHS];

    // Variables for calculations
    double total = 0;
    double average;

    // Variables to track highest and lowest rainfall
    double highest, lowest;
    int highMonth = 0, lowMonth = 0;

    cout << "Rainfall Statistics\n";

    // Loop to get rainfall input per month
    for (int i = 0; i < MONTHS; i++) {
        cout << "Enter rainfall for month " << i + 1 << ": ";
        cin >> rainfall[i];

        // Input validation( no negative)
        while (rainfall[i] < 0) {
            cout << "Invalid input. Rainfall cannot be negative.\n";
            cout << "Enter rainfall for month " << i + 1 << ": ";
            cin >> rainfall[i];
        }

        // Add to total rainfall
        total += rainfall[i];

        // Initialize highest and lowest on first iteration
        if (i == 0) {
            highest = rainfall[i];
            lowest = rainfall[i];
            highMonth = i;
            lowMonth = i;
        }
        else {
            // Check for highest rainfall
            if (rainfall[i] > highest) {
                highest = rainfall[i];
                highMonth = i; // store index of month
            }

            // Check for lowest rainfall
            if (rainfall[i] < lowest) {
                lowest = rainfall[i];
                lowMonth = i; // store index of month
            }
        }
    }

    // Calculate average rainfall
    average = total / MONTHS;

    // Format output to 2 decimal places
    cout << fixed << setprecision(2);

    // Display results
    cout << "\nTotal rainfall for the year: " << total << " inches\n";
    cout << "Average monthly rainfall: " << average << " inches\n\n";

    cout << "Month with the highest rainfall: Month "
         << highMonth + 1 << " (" << highest << " inches)\n";

    cout << "Month with the lowest rainfall: Month "
         << lowMonth + 1 << " (" << lowest << " inches)\n";

    return 0;
}
