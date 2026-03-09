#include <iostream>
#include <fstream>   // Required for file input
using namespace std;

int main() {

    // Variable to store numbers read from the file
    int number;

    // Counter to keep track of how many numbers are read
    int count = 0;

    // Variable to keep a running total of the numbers
    int sum = 0;

    // Variable to store the final average
    double average;

    // Create an input file stream object
    ifstream inputFile;

    // Attempt to open the file Random.txt
    inputFile.open("Random.txt");

    // Check if the file successfully opened
    if (!inputFile) {
        cout << "Error opening file." << endl;
        return 1;
    }

    // Inform the user that the file is opening
    cout << "Opening file Random.txt..." << endl;

    // Read numbers from the file until there are no more
    while (inputFile >> number) {

        // Add the number to the running total
        sum += number;

        // Increase the count of numbers read
        count++;
    }

    // Calculate the average
    if (count > 0) {
        average = (double)sum / count;
    } else {
        average = 0;
    }

    // Display results to the user
    cout << "Number of numbers in the file: " << count << endl;
    cout << "Sum of the numbers: " << sum << endl;
    cout << "Average of the numbers: " << average << endl;

    // Close the file after processing
    inputFile.close();

    return 0;
}
