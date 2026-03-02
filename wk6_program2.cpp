#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{

    for (int asciiCode = 0; asciiCode <= 127; asciiCode++)
    {
     
        char character = static_cast<char>(asciiCode);
        
        cout << setw(4) << character;

        if ((asciiCode + 1) % 16 == 0)
        {
            cout << endl;
        }
    }

    return 0;  
}
