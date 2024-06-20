#include <iostream>

using std::endl;
using std::cout;
using std::cin;
using std::string;

int main() {

  // Question 1
  int number;

  cout << "Enter a number: " << endl;
  cin >> number;

  if (number > 0 && number <= 20) {
    cout << "Number is bigger than 0, and smaller or equal to twenty" << endl;
  }
  else if (number > 20 && number <= 50){ //1
    cout << "Number is bigger than 20, and smaller or equal to 50." << endl;
  }
  else if(number > 50 && number <= 80){ //2
    cout << "Number is bigger than 50, and smaller or equal to 80." << endl;
  }
  else if (number > 80) {
    cout << "Number is  greater than 80." << endl;
  }
  else {
    cout << "Number is negative." << endl;
  }

  // Question 2
  int a, b;
  cout << "Enter two numbers: " << endl;
  cin >> a >> b;

  if (a % b == 0 || b % a == 0){
    cout << "Is multiplied!" << endl;
  } else { // False
    cout << "Is not multiplied!" << endl;
  }

  // Question 3
  int month;
    cout << "Enter month:  ";
    cin >> month;

    switch(month){
        case 1:
            cout << "January\n";
            break;
        case 2:
            cout << "February\n";
            break;
        case 3:
            cout << "March\n";
            break;
        case 4:
            cout << "April\n";
            break;
        case 5:
            cout << "May\n";
            break;
        case 6:
            cout << "June\n";
            break;
        case 7:
            cout << "July\n";
            break;
        case 8:
            cout << "August\n";
            break;
        case 9:
            cout << "September\n";
            break;
        case 10:
            cout << "October\n";
            break;
        case 11:
            cout << "November\n";
            break;
        case 12:
            cout << "December\n";
            break;
        default:
            cout << "There is no match for this month.\n";
    }

    // Question 4
    string username, password;

    cout << "Enter username and password: \n";
    cin >> username >> password ;

    if (username == "testuser" && password == "Test124"){
        cout << "True";
    } else {
        cout << "False";
    }

    // Question 5
    int day;

    cout << "Enter day: ";
    cin >> day;

    switch(day){
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "There is no day with this number";
    }

    // Question 6
    char grade;
    cout << "Enter grade: ";
    cin >> grade;

    switch(grade){
        case 'A':
            cout << "Excellent\n";
            break;
        case 'B' :
            cout << "Great \n";
            break;
        default:
            cout << "There is no appropriate grade.";
    }

    // Question 7
    int a;
    double b, c;
    cout << "Enter total number of classes: ";
    cin >> a ;

    cout << "Enter  number of attended classes: ";
    cin >> b ;

    c = (b/a) * 100;

    if ( c > 75){
        cout << "Student can attend exams\n.";
    } else {
        cout << "Student can not attend exams.\n";
    }

    // Question 8
    int a,b,c;
    cout << "Enter three numbers: \n";
    cin >> a >> b >> c;

    if (a > b && a > c){
        cout << a << " is max.\n";
    }
    else if (b>c){
        cout << b << " is max.\n";
    }
    else {
        cout << c << " is max.\n";
    }

    // Question 9
    int a,b,c;

    cout << "Enter values for three sides of triangle: \n";
    cin >> a >> b >> c;

    if ( a == b && b == c){
        cout << "Equilateral triangle.\n";
    }
    else if (a == b || b == c || a == c){
        cout << "Isosceles triangle\n";
    }
    else {
        cout << "Scalene triangle\n";
    }

    // Question 10
    char ch;
    cout << "Input a character: \n";
    cin >> ch;

    switch(ch){

        case '0': case '1': case '2' : case '3': case '4': case '5':
        case '6' : case '7' : case '8' : case '9' :
            cout << "It is a number\n";
            break;

        case '!': case '@': case '#': case '$': case '%': case '^': case '&': case '*': case '(': case ')':
        case '-': case '_': case '+': case '=': case '[': case ']': case '{': case '}': case '|': case '\\':
        case ';': case ':': case '\'': case '"': case '<': case '>': case ',': case '.': case '/': case '?':
            cout << "It is a special character." << endl;
            break;

        default:
            cout << "It is a letter.";

    }

    // Question 11
    int option, day = 0, month = 0, year = 0, age;
    string dob;

    cout << "Choose menu option: \n";
    cout << "Option 1 - ask the user to enter date of birth\n";
    cout << "Option 2 - calculate user's age\n";
    cout << "Option 3 - inform the user about their age\n";
    cout << "Option 4 - exit the program\n";
    cout << "Chose your option: \n";

    cin >> option;

    switch(option){
        case 1:
            cout << "Please enter your date of birth(enter just numbers):\n";
            cin >> day >> month >> year;
            cout << "Your date of birth is " << day << "." << month << "." << year << ".\n";
            break;
        case 2:
            if (year == 0 ){
                cout << "Please enter your year of birth, so we can calculate your age: \n";
                cin >> year;
                age = 2024 - year;
                cout << "Your age is " << age;
            }
            else {
                age = 2024 - year;
                cout << "Your age is " << age;
            }
            break;
        case 3:
            if (year == 0){
                cout << "Please enter your year of birth, so we can calculate your age: \n";
                cin >> year;
            }
            age = 2024 - year;
            if (age < 40){
                cout << "You are young\n";
            }
            else {
                cout << "You are old.\n";
            }
            break;
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "There is no match for this option.\n";

    }

    // Question 12
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }
    

  return 0;
}