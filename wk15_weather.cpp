#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct MonthlyWeather
{
    double totalrainfall;
    int hightemperature;
    int lowtemperature;
    double averagetemperature;
};

int main()
{
    MonthlyWeather month[12];

    string monthnames[12] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    double totalRainfall = 0;
    double totalAverageTemp = 0;

    int highestTemp;
    int lowestTemp;
    int highestMonth = 0;
    int lowestMonth = 0;

    cout << "Weather Statistics Program" << endl;

    for (int i = 0; i < 12; i++)
    {
        cout << "\nEnter data for " << monthnames[i] << ":" << endl;

        cout << "  Total rainfall: ";
        cin >> month[i].totalrainfall;

        cout << "  High temperature: ";
        cin >> month[i].hightemperature;

        while (month[i].hightemperature < -100 || month[i].hightemperature > 140)
        {
            cout << "  Invalid. Enter a temperature between -100 and 140: ";
            cin >> month[i].hightemperature;
        }

        cout << "  Low temperature (F): ";
        cin >> month[i].lowtemperature;

        while (month[i].lowtemperature < -100 || month[i].lowtemperature > 140)
        {
            cout << "  Invalid. Enter a temperature between -100 and 140: ";
            cin >> month[i].lowtemperature;
        }

        month[i].averagetemperature = (month[i].hightemperature + month[i].lowtemperature) / 2.0;

        cout << fixed << setprecision(1);
        cout << "  Average temperature automatically calculated: "
             << month[i].averagetemperature << endl;
    }

    highestTemp = month[0].hightemperature;
    lowestTemp = month[0].lowtemperature;

    for (int i = 0; i < 12; i++)
    {
        totalRainfall += month[i].totalrainfall;
        totalAverageTemp += month[i].averagetemperature;

        if (month[i].hightemperature > highestTemp)
        {
            highestTemp = month[i].hightemperature;
            highestMonth = i;
        }

        if (month[i].lowtemperature < lowestTemp)
        {
            lowestTemp = month[i].lowtemperature;
            lowestMonth = i;
        }
    }

    cout << "\n\n=== Annual Weather Summary ===" << endl;

    cout << fixed << setprecision(1);
    cout << "\nTotal rainfall for the year: " << totalRainfall << " inches" << endl;

    cout << fixed << setprecision(2);
    cout << "Average monthly rainfall: " << totalRainfall / 12 << " inches" << endl;

    cout << "\nHighest temperature: " << highestTemp << " F (" << monthnames[highestMonth] << ")" << endl;
    cout << "Lowest temperature: " << lowestTemp << " F (" << monthnames[lowestMonth] << ")" << endl;

    cout << fixed << setprecision(1);
    cout << "\nAverage of all monthly average temperatures: "
         << totalAverageTemp / 12 << " F" << endl;

    return 0;
}
