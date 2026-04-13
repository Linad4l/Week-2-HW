#include <iostream>
#include <vector>
using namespace std;

// Function that prints values greater than n
void valuechecker(vector<int> v, int size, int n) {
    cout << "Numbers greater than " << n << ":" << endl;

    for (int i = 0; i < size; i++) {
        if (v.at(i) > n) {
            cout << v.at(i) << " ";
        }
    }
    cout << endl;
}

int main() {
    // vector of integers
    vector<int> nums = {4, 9, 3, 27, 6, 44, 2, 18};

    int n = 8;

    // display original vector
    cout << "Vector values: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "Value of n: " << n << endl << endl;

    // call function
    valuechecker(nums, nums.size(), n);

    return 0;
}
