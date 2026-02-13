#include <iostream>
using namespace std;

int main()
{
    char package;
    double gigused,totalbill;
    
   cout << "Let's calculate your bill this month" << endl << "What package have you purchased: A, B, or C? ";
   cin >> package;

    if (package == 'A' || package == 'B') {
        cout << "How many gigabytes have you used this month? ";
        cin >> gigused;
    }
   
   if(package == 'A')
   {
       totalbill = 39.99;
       if (gigused > 4);
       {
           totalbill+=(gigused-4)*10;
       }
   }
   else if(package == 'B')
   {
       totalbill = 59.99;
       if (gigused > 8);
       {
           totalbill+=(gigused-8)*5;
       }
   }
   else if(package == 'C')
   {
       totalbill = 69.99;
   }
   cout << "Your total bill this month is: " << totalbill;
   }
