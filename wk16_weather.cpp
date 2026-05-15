#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // store the file name entered by the user
    string fileName;

    // store each line read from the file
    string line;

    // Keeps track of how many lines shown
    int lineCount = 0;

    cout << "Enter the name of the file: ";
    getline(cin, fileName);

    // Open the file 
    ifstream inputFile(fileName);

    // Read and display the file one line at a time
    while (getline(inputFile, line))
    {
        cout << line << endl;

        lineCount++;

        // After every 24 lines, wait for the user
        if (lineCount % 24 == 0)
        {
            cout << endl;
            cout << "Press Enter to continue";

            cin.get();

            cout << endl;
        }
    }

    // Close the file after reading all contents
    inputFile.close();

    return 0;
}
