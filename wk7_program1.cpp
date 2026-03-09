#include <iostream>
#include <fstream>   // Needed for file operations
#include <string>    // Needed to use string variables

using namespace std;

int main() {

    // Declare variables to store the user's name and description
    string name;
    string description;

    // Ask the user to enter their name
    cout << "Enter your name: ";
    getline(cin, name);  //so spaces are allowed

    // Ask the user to describe themselves
    cout << "Describe yourself: ";
    getline(cin, description);   // for full sentences

    // Create an output file named profile.html
    ofstream outputFile;

    // Open the file
    outputFile.open("profile.html");

    // Write the HTML structure into the file
    outputFile << "<html>\n";
    outputFile << "<head>\n";
    outputFile << "</head>\n";

    outputFile << "<body>\n";

    // Center the user's name and display it as a heading
    outputFile << "    <center>\n";
    outputFile << "        <h1>" << name << "</h1>\n";
    outputFile << "    </center>\n";

    // Add a horizontal line
    outputFile << "    <hr>\n";

    // Insert the user's description
    outputFile << "    " << description << "\n";

    // Add another horizontal line
    outputFile << "    <hr>\n";

    outputFile << "</body>\n";
    outputFile << "</html>\n";

    // Close the file after writing to it
    outputFile.close();

    // Inform user the file was created successfully
    cout << "Your webpage has been created as profile.html!" << endl;

    return 0;
}
