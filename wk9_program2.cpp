#include <iostream>
#include <iomanip>
using namespace std;

const double SQFT_PER_GALLON = 110.0;
const double HOURS_PER_GALLON = 8.0;
const double LABOR_RATE = 25.0;

// function to get number of rooms
int getRooms() {
    int rooms;
    cout << "Enter the number of rooms to be painted: ";
    cin >> rooms;

    while (rooms < 1) {
        cout << "Invalid input. Number of rooms must be at least 1.\n";
        cout << "Enter the number of rooms to be painted: ";
        cin >> rooms;
    }

    return rooms;
}

// function to get paint price
double getPaintPrice() {
    double price;
    cout << "\nEnter the price of paint per gallon: ";
    cin >> price;

    while (price < 10.0) {
        cout << "Invalid input. Paint price must be at least $10.00.\n";
        cout << "Enter the price of paint per gallon: ";
        cin >> price;
    }

    return price;
}

// function to get total square feet
double getTotalSqFt(int rooms) {
    double total = 0;
    double sqft;

    for (int i = 1; i <= rooms; i++) {
        cout << "\nEnter the square feet of wall space for room " << i << ": ";
        cin >> sqft;

        while (sqft < 0) {
            cout << "Invalid input. Square footage cannot be negative.\n";
            cout << "Enter the square feet of wall space for room " << i << ": ";
            cin >> sqft;
        }

        total += sqft;
    }

    return total;
}

// calculation functions
double calcGallons(double sqft) {
    return sqft / SQFT_PER_GALLON;
}

double calcLaborHours(double gallons) {
    return gallons * HOURS_PER_GALLON;
}

double calcPaintCost(double gallons, double price) {
    return gallons * price;
}

double calcLaborCost(double hours) {
    return hours * LABOR_RATE;
}

void displayResults(double totalSqFt, double gallons, double hours,
                    double paintCost, double laborCost) {

    cout << fixed << setprecision(2);

    cout << "\n----- Paint Job Estimate -----\n";
    cout << "Total square feet to be painted: " << totalSqFt << endl;

    cout << "\nGallons of paint required: " << gallons << endl;
    cout << "Hours of labor required: " << hours << endl;

    cout << "\nCost of the paint: $" << paintCost << endl;
    cout << "Labor charges: $" << laborCost << endl;

    cout << "\nTotal cost of the paint job: $" << (paintCost + laborCost) << endl;
}

int main() {
    cout << "Paint Job Estimator\n\n";

    int rooms = getRooms();
    double price = getPaintPrice();
    double totalSqFt = getTotalSqFt(rooms);

    double gallons = calcGallons(totalSqFt);
    double hours = calcLaborHours(gallons);
    double paintCost = calcPaintCost(gallons, price);
    double laborCost = calcLaborCost(hours);

    displayResults(totalSqFt, gallons, hours, paintCost, laborCost);

    return 0;
}
