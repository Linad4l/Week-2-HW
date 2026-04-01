#include <iostream>
using namespace std;

int main() {
    // Declare an array to store 10 integer values
    int values[10];

    // Variables that tracks smallest and largest values
    int smallest, largest;

    cout << "Largest and Smallest Values in an Array\n";

    // Loop to get 10 values from the user
    for (int i = 0; i < 10; i++) {
        cout << "Enter value #" << i + 1 << ": ";
        cin >> values[i]; // store input in array

        //initialize both smallest and largest
        if (i == 0) {
            smallest = values[i];
            largest = values[i];
        }
        else {
            // Check if value is smaller than smallest
            if (values[i] < smallest) {
                smallest = values[i];
            }

            // Check if value is larger than largest
            if (values[i] > largest) {
                largest = values[i];
            }
        }
    }

    // Display results
    cout << "\nThe smallest value in the array is: " << smallest << endl;
    cout << "The largest value in the array is: " << largest << endl;

    return 0;
}
