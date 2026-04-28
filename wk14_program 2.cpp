#include <iostream>
#include <string>
using namespace std;

struct CompanyDivision
{
    string divisionName;
    double firstQuarter;
    double secondQuarter;
    double thirdQuarter;
    double fourthQuarter;
    double totalAnnualSales;
    double averageQuarterlySales;
};

// Function prototypes
double getValidSales(string quarterName);
void getDivisionData(CompanyDivision &division);
void calculateSales(CompanyDivision &division);
void displayDivisionData(const CompanyDivision division);

int main()
{
    cout << "Corporate Sales Data Program\n\n";
    cout << "Enter sales data for each division.\n\n";

    CompanyDivision East = {"East"};
    CompanyDivision West = {"West"};
    CompanyDivision North = {"North"};
    CompanyDivision South = {"South"};

    getDivisionData(East);
    getDivisionData(West);
    getDivisionData(North);
    getDivisionData(South);

    calculateSales(East);
    calculateSales(West);
    calculateSales(North);
    calculateSales(South);

    // Display annual sales report
    cout << "\n----------Annual Sales Report-----------\n\n";

    displayDivisionData(East);
    displayDivisionData(West);
    displayDivisionData(North);
    displayDivisionData(South);

    return 0;
}

// data validation
double getValidSales(string quarterName)
{
    double sales;

    cout << "Enter " << quarterName << " sales: ";
    cin >> sales;

    // Input validation: keep asking until sales is not negative
    while (sales < 0)
    {
        cout << "Invalid input. Sales cannot be negative.\n";
        cout << "Enter " << quarterName << " sales: ";
        cin >> sales;
    }

    return sales;
}

// gets all data per division
void getDivisionData(CompanyDivision &division)
{
    cout << "--- " << division.divisionName << " Division ---\n";

    division.firstQuarter = getValidSales("first-quarter");
    division.secondQuarter = getValidSales("second-quarter");
    division.thirdQuarter = getValidSales("third-quarter");
    division.fourthQuarter = getValidSales("fourth-quarter");

    cout << endl;
}

// calc total and average sales 
void calculateSales(CompanyDivision &division)
{
    division.totalAnnualSales = division.firstQuarter + division.secondQuarter +
                                division.thirdQuarter + division.fourthQuarter;

    division.averageQuarterlySales = division.totalAnnualSales / 4;
}

// displays the sales report per division
void displayDivisionData(const CompanyDivision division)
{
    cout << "Division: " << division.divisionName << endl;
    cout << "Total Annual Sales: $" << division.totalAnnualSales << endl;
    cout << "Average Quarterly Sales: $" << division.averageQuarterlySales << endl;
    cout << endl;
}
