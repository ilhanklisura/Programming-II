#include <iostream>
#include <cmath>

using namespace std;

int main() {
  
  // Question 1
  cout << "Ilhan Klisura" << endl;
  cout << "14.11.2002." << endl;
  cout << "+387 61 389 028" << endl;

  // Question 2
  char ch = 'A';
  string str = "fresh2refresh.com";
  float flt = 10.234;
  int no = 15;
  double dbl = 20.123456;

  cout << ch << endl;
  cout << str << endl;
  cout << flt << endl;
  cout << no << endl;
  cout << dbl << endl;

  // Question 3
  int width, length, sum;

  cout << "Enter width of rectangle: ";
  cin >> width;
  cout << "Enter length of rectangle: ";
  cin >> length;

  sum = width * length;
  cout << sum << endl;

  // Question 4
  int a = 10, b = 5, swap;

  cout << "Values before swapping:" << endl;
  cout << "a: " << a << ", b: " << b << endl;
  
  swap = a;
  a = b;
  b = swap;

  cout << "After swapping: " << endl;
  cout << "a: " << a << ", b: " << b << endl;

  // Question 5
  int hours = 6, minutes = 40, totalSeconds;

  totalSeconds = (hours * 3600) + (minutes * 60);
  cout << "Conversion of 6 hours and 40 minutes to seconds is: " << totalSeconds << endl;

  // Question 6
  int celsius, fahrenheit;

  cout << "Enter fahrenheits: ";
  cin >> fahrenheit;
  celsius = (fahrenheit - 32) * 5/9;
  cout << "The conversion is: " << celsius << endl;

  cout << "Enter celsius: ";
  cin >> celsius;
  fahrenheit = (9/5 * celsius) + 32;
  cout << "The conversion is: " << fahrenheit << endl;

  // Question 7
  int calculus, physics, programming, english;
  double averageGrade;

  cout << "Enter grade for calculus: ";
  cin >> calculus;
  cout << "Enter grade for physics: ";
  cin >> physics;
  cout << "Enter grade for programming: ";
  cin >> programming;
  cout << "Enter grade for english: ";
  cin >> english;

  averageGrade = (calculus + physics + programming + english) / 4.0;

  cout << "The average grade is: " << round(averageGrade * 100) / 100 << endl;

  // Question 8
  string song = "";
  
  cout << "Enter the lines of your song. Type 'exit' to finish:\n";
  
  while (true) {
    string line;
    getline(cin, line);
      
      if (line == "exit") {
        break;
      }  
    song += line + "\n";
    }
    
  cout << "Your song is: " << song << endl;

  // Question 9
  int firstNumber, secondNumber;

  cout << "Enter first number: ";
  cin >> firstNumber;
  cout << "Enter second number: ";
  cin >> secondNumber;
 
  cout << "a + b = " << (a + b) << endl; 
  cout << "a - b = " << (a - b) << endl; 
  cout << "a * b = " << (a * b) << endl; 
  cout << "a / b = " << (a / b) << endl; 
  cout << "a % b = " << (a % b) << endl;

  // Question 10
  int number1 = 145;
  int number2 = 200;
    
  cout << number1 << " " << number2 << endl;
  
  number1 = number1 + number2;
  number2 = number1 - number2;
  number1 = number1 - number2;
  
  cout << number1 << " " << number2 << endl;

  // Question 11
  float angleOne, angleTwo, angleThree; 

  cout << "\n\n Find the third angle of a triangle :\n"; 
  cout << "-----------------------------------------\n";

  cout << "Input the 1st angle of the triangle: "; 
  cin >> angleOne; 

  cout << "Input the 2nd angle of the triangle: "; 
  cin >> angleTwo;

  angleThree = 180 - (angleOne + angleTwo); 

  cout << "The 3rd of the triangle is: " << angleThree << endl; 
  cout << endl;

  // Question 12
  int num = 57;
  
  cout << "\n\n Display the operation of pre and post increment and decrement :\n";
  cout << "--------------------------------------------------------------------\n";
  cout << "The number is : " << num << endl;
  num++;
    
  cout << "After post increment by 1 the number is : " << num << endl;
  ++num;
    
  cout << "After pre increment by 1 the number is : " << num << endl;
  num = num + 1;
    
  cout << "After increasing by 1 the number is : " << num << endl;
  num--;
    
  cout << "After post decrement by 1 the number is : " << num << endl;
  --num;
    
  cout <<"After pre decrement by 1 the number is : " << num << endl;
  num = num - 1;
    
  cout << "After decreasing by 1 the number is : " << num << endl;
  cout << endl;

  return 0;
}