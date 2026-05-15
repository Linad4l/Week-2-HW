#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void displayJoke(ifstream &jokeFile);
void displayPunchLine(ifstream &punchLineFile);

int main()
{
    ifstream jokeFile;
    ifstream punchLineFile;

    // Open the joke file
    jokeFile.open("joke.txt");

    // Open the punch line file
    punchLineFile.open("punchline.txt");

    // Display the joke from the joke file
    cout << "Joke:" << endl;
    displayJoke(jokeFile);

    cout << endl;

    // Display last line from the punchline file
    cout << "Punch Line:" << endl;
    displayPunchLine(punchLineFile);

    // Close both files
    jokeFile.close();
    punchLineFile.close();

    return 0;
}

//function reads jokes from jokefile
void displayJoke(ifstream &jokeFile)
{
    string line;

    while (getline(jokeFile, line))
    {
        cout << line << endl;
    }
}

//function to display last lines of punchline file
void displayPunchLine(ifstream &punchLineFile)
{
    char ch;

    // Move to the end of the file
    punchLineFile.seekg(0, ios::end);

    // Move backward one character so we are not past the end
    punchLineFile.seekg(-1, ios::cur);

    // Move backward until newline before the last line
    punchLineFile.get(ch);

    while (ch != '\n')
    {
        punchLineFile.seekg(-2, ios::cur);
        punchLineFile.get(ch);
    }

    string punchLine;

    // Read the last line after the newline character
    getline(punchLineFile, punchLine);

    // Display the punch line
    cout << punchLine << endl;
}
