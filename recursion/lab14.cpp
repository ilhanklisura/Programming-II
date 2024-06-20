#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// 1
int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    return n % 10 + sumOfDigits(n / 10);
}

// 2
bool isEven(int n) {
    if (n == 0)
        return true;
    if (n == 1)
        return false;
    return isEven(n - 2);
}

// 3
void reverseString(string& str, int start, int end) {
    if (start >= end)
        return;
    swap(str[start], str[end]);
    reverseString(str, start + 1, end - 1);

}

// 4
int binarySearch(int arr[], int low, int high, int el) {
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == el)
            return mid;
        if (arr[mid] > el)
            return binarySearch(arr, low, mid - 1, el);
        return binarySearch(arr, mid + 1, high, el);
    }
    return -1;
}

// 5
int power(int a, int b) {
    if (b == 0)
        return 1;
    return a * power(a, b - 1);
}

// 6
int countWays(int n) {
    if (n == 0 || n == 1)
        return 1;
    return countWays(n - 1) + countWays(n - 2);
}

// 7
int countLines(ifstream& file) {
    string line;
    if (!getline(file, line))
        return 0;
    return 1 + countLines(file);
}

// 8
int sumNumbers(ifstream& file) {
    string line;
    if (getline(file, line)) {
        if (!line.empty()) {
            int number = stoi(line);
            return number + sumNumbers(file);
        } else {
            return sumNumbers(file);
        }
    } else {
        return 0;
    }
}

// 9
string decimalToBinary(int n) {
    string empty_str = "";
    if (n == 0)
        return empty_str;
    return decimalToBinary(n / 2) + to_string(n % 2);
}

// 10
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int binomialCoefficient(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    return factorial(n) / (factorial(k) * factorial(n - k));
}

// 12
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arr[], int n) {
    if (n == 1)
        return;

    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }

    bubbleSort(arr, n - 1);
}

// 11
void generateParentheses(int open, int close, string str) {
    if (open == 0 && close == 0) {
        cout << str << endl;
        return;
    }

    if (open > 0) {
        generateParentheses(open - 1, close, str + "(");
    }

    if (close > open) {
        generateParentheses(open, close - 1, str + ")");
    }
}

// 13
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}


int main() {
    string initial = "AnAAnA";
    string new_str = initial;
    reverseString(initial, 0, 2);
    if(new_str == initial) {
        cout << "Palindrome" << endl;

    }
    else {
        cout <<"Not a palindrome" << endl;
    }
    // cout <<gcd(8, 4);



}
