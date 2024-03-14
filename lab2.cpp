//
// Created by Ilhan Klisura on 7. 3. 2024..

// #2: Write a C++ program that reads two integers and checks if they are multiplied or not.

// Test Data :
// Input the first number: 5
// Input the second number: 15
// Expected Output: Multiplied!

//

#include <iostream>

using namespace std;

int main() {

    int rangeNumber;
    cout << "Enter an integer: ";
    cin >> rangeNumber;

    if (rangeNumber < 0 || rangeNumber > 80) {
        cout << "Number is negative or greater than 80." << endl;
    } else if (rangeNumber <= 20) {
        cout << "Number is in range of 0 and 20." << endl;
    } else if (rangeNumber <= 50) {
        cout << "Number is in rage of 21 and 50." << endl;
    } else {
        cout << "Number is in range of 51 and 80." << endl;
    }

    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (username == "testuser" && password == "Test124") {
        cout << "These are valid." << endl;
    } else {
        cout << "Try again, not valid." << endl;
    }

    int dayNumber;
    cout << "Enter number: ";
    cin >> dayNumber;

    switch(dayNumber){
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Thursday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Tuesday";
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
            cout << "Upiši broj između 1 i 7.";
    }

    char grade;
    cout << "Enter grade: ";
    cin >> grade;

    switch(grade) {
        case 'A':
            cout << "Excellent.\n";
            break;
        case 'B':
            cout << "Good.\n";
            break;
        case 'C':
            cout << "Fair.\n";
            break;
        case 'D':
            cout << "Average.\n";
            break;
        case 'E':
            cout << "Passing.\n";
            break;
        case 'F':
            cout << "Failing.\n";
            break;
        default:
            cout << "Upiši karakter između A i F.\n";
    }

    int totalSubjects;
    double totalAttendance;

    cout << "Enter subjects: ";
    cin >> totalSubjects;
    cout << "Enter attendance: ";
    cin >> totalAttendance;

    double result = (totalAttendance/totalSubjects) * 100;

    if (result>=75) {
        cout << "You can attend an exam." << endl;
    } else {
        cout << "You cannot attend an exam." << endl;
    }

    // Question 11: Finish at home!

    return 0;
}

