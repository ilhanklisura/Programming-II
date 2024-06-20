//#3: Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a class named 'Triangle'.
// Write functions to calculate perimeter and area; and one to print the information.

#include <iostream>
#include <cmath>
using namespace std;

class Triangle{
public:
    int s1, s2, s3;

    Triangle(int s1, int s2, int s3){
        this->s1 = s1;
        this->s2 = s2;
        this->s3 = s3;
    }

    int calculatePerimeter()  {
        return s1+s2+s3;
    }

    int calculateArea(){
        int sP = (s1+ s2 + s3) / 2; //sp stads for semiPerimeter
        int area = sqrt( sP*(sP- s1) * (sP - s2) * (sP - s3));
        return area;
    }

    // Method to print the information
    void print_info()  {
        cout << "Triangle sides: " << s1 << ", " << s2 << ", " << s3 << endl;
        cout << "Perimeter: " << calculatePerimeter() <<endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

int main() {
    Triangle triangle = Triangle(3,4,5);

    triangle.print_info();

    return 0;
}
