#include <iostream>
using namespace std;

// Function prototypes
double getLength();
double getWidth();
double getArea(double, double);
void displayData(double, double, double);

int main()
{
   double length,    
          width,    
          area;      
          
   cout << "Rectangle Area Calculator" << endl;
   cout << "-------------------------" << endl << endl;

   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea(length, width);
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}


// asks user for length with function
double getLength()
{
    double length;

    cout << "Enter the rectangle's length: ";
    cin >> length;

    return length;
}



// asks user for width 
double getWidth()
{
    double width;

    cout << "Enter the rectangle's width: ";
    cin >> width;

    return width;
}



// calculates area using length * width
double getArea(double length, double width)
{
    double area;

    area = length * width;

    return area;
}


// displays length, width, and area
void displayData(double length, double width, double area)
{
    cout << endl;

    cout << "The rectangle's length is " << length << endl;
    cout << "The rectangle's width is " << width << endl;
    cout << "The area of the rectangle is " << area << endl;
}
