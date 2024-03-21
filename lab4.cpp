#include <iostream>
#include <string>
using namespace std;

int main() {

    // Question 1

    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            cout << i << " " << endl;
        }
    }

    // Question 2

    int maxValue;
    cout << "Enter the maximum value: ";
    cin >> maxValue;

    for (int i = 1; i <= maxValue; i += 2) {
        cout << "Square of " << i << " is " << i * i << endl;
    }

    // Question 3

    int divideNumber;
    cout << "Enter the divide number: ";
    cin >> divideNumber;

    cout << "Numbers from 1 to 100 with a remainder of 3 when divided by " << divideNumber << ":" << endl;
    for (int i = 1; i <= 100; i++) {
        if (i % divideNumber == 3) {
            cout << i << " " << endl;
        }
    }

    // Question 4

    string setPassword, enteredPassword;
    int attemptCount = 0;

    cout << "Set your password: ";
    cin >> setPassword;

    while (attemptCount < 5) {
        cout << "Enter your password: ";
        cin >> enteredPassword;

        if (enteredPassword == setPassword) {
            cout << "Password correct. Welcome!" << endl;
            break;
        } else {
            cout << "Wrong password. Try again." << endl;
            attemptCount++;
        }
    }

    if (attemptCount == 5) {
        cout << "Wrong password, better luck next time." << endl;
    }

    // Question 6

    int n;
    double sum = 1.0;

    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum += 1 / pow(i, i);
    }

    cout << "Sum of the series is: " << round(sum*100)/100 << endl;

    // Question 7

    int number;
    long factorial = 1.0;

    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= number; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << number << " = " << factorial << endl;
    }

    // Question 8

    // FINISH LATER

    // Question 15

    int x;

    cout << "Write x: ";
    cin >> x;

    for(int i = 0; i < x; i++) {
        if(pow(2,i) == x) {
            cout << "Pow of 2";
            break;
        }
        else if(pow(2,i)>x) {
            cout << "Not power of 2";
            break;
        }
    }

    return 0;
};
