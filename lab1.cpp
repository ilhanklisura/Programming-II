#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // First Question:

    string name = "Ilhan Klisura";
    string birthday = "14.11.2002.";
    string mobile = "061 389 028";

    cout << name << endl;
    cout << birthday << endl;
    cout << mobile << endl;

    // Seventh Question:
    double length, width, area;
    cout << "Write length: ";
    cin >> length;
    cout << "Write width: ";
    cin >> width;

    area = length * width;
    cout << "Area of rectangle is: " << area << endl;

    // Fifth Question:
    char c = 'A';
    string website = "fresh2refresh.com";
    float number = 10.234;
    int no = 15;
    double decimal = 20.123456;

    // Swap numbers:
    int a = 5;
    int b = 10;

    int swap = a;
    a = b;
    b = swap;

    cout << "Integer One: " << a << endl;
    cout << "Integer Two: " << b << endl;

    // Swap numbers from sum:
    int aSum, bSum;
    cout << "Write sum A: ";
    cin >> aSum;
    cout << "Write sum B: ";
    cin >> bSum;

    aSum = aSum + bSum;
    bSum = aSum - bSum;
    aSum = aSum - bSum;

    cout << "Sum A is: " << aSum << endl;
    cout << "Sum B is: " << bSum << endl;

    // Hours to seconds:
    const int hours = 6;
    const int minutes = 40;

    int seconds = hours * 3600 + minutes * 60;

    cout << hours << " hours and " << minutes << " minutes is equivalent to " << seconds << " seconds." << endl;

    /*
     * Write a C++ program that serves a temperature calculator
     * (converts Fahrenheit into Celsius, vice versa).
     *
     * C = (°F - 32) × 5/9
     * °F = (9/5 × °C) + 32
     *
     * */
    float celsius, fahrenheit;
    cout << "Input temperature in Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5 / 9;

    cout << "Input temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (9 / 5 * celsius) + 32;

    cout << "The temperature in Fahrenheit: " << celsius << endl;
    cout << "The temperature in Celsius: " << fahrenheit << endl;

    // Average Grade Question:
    double calculus, physics, programming, english;

    cout << "Enter Calculus grade: ";
    cin >> calculus;
    cout << "Enter Physics grade: ";
    cin >> physics;
    cout << "Enter Programming grade: ";
    cin >> programming;
    cout << "Enter English Language grade: ";
    cin >> english;

    double averageGrade = (calculus + physics + programming + english) / 4.0;
    cout << "Average Grade: " << averageGrade << endl;

    // Display the operation of preincrement and postincrement and decrement:

    int aIncrement, bIncrement, x = 4, cDecrement, dDecrement;
    aIncrement = x++;
    cout << "Increment A: " << aIncrement << endl;

    bIncrement = ++x;
    cout << "Increment B: " << bIncrement << endl;

    cDecrement = x--;
    cout << "Decrement A: " << cDecrement << endl;

    dDecrement = --x;
    cout << "Decrement B: " << dDecrement << endl;

    return 0;
}
