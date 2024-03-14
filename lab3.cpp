#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

    cout << "Min is: " << min(5,10) << endl;
    cout << "Max is: " << max(5,10) << endl;

    double square_root, rounded, logarithm;

    square_root = sqrt(64);
    rounded = round(2.6);
    logarithm = log(2);

    cout << "Square root of 64: " << square_root << endl;
    cout << "Round the number 2.6: " << rounded << endl;
    cout << "Logarithm of 2: " << logarithm << endl;

    string p = "10";
    string l = "20";
    string t = p + l;

    cout << t << endl;

    string a = "ABC";
    string b = "DEF";

    cout << a.append(b) << endl;

    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int length;
    char firstElement, lastElement;

    length = txt.length();
    firstElement = txt[0];
    lastElement = txt[length - 1];

    cout << "Length of the string: " << length << endl;
    cout << "First element of the string: " << firstElement << endl;
    cout << "Last element of the string: " << lastElement << endl;

    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num == 0) {
        cout << num << " is undefined." << endl;
    } else {
        int logarithm = log2(num);
        if (num == pow(2, logarithm)) {
            cout << num << " is a power of two." << endl;
        } else {
            cout << num << " is not a power of two." << endl;
        }
    }

    string name1, surname1, name2, surname2;
    int dateofbirth1, dateofbirth2;

    int currentYear = 2024;

    cout << "User 1 name and surname: ";
    getline(cin, name1, ' ');
    getline(cin, surname1);
    cout << "User 1 year of birth: ";
    cin >> dateofbirth1;

    cin.ignore();

    cout << "User 2 name and surname: ";
    getline(cin, name2, ' ');
    getline(cin, surname2);
    cout << "User 2 year of birth: ";
    cin >> dateofbirth2;

    int age1 = currentYear - dateofbirth1;
    int age2 = currentYear - dateofbirth2;

    cout << "\nWelcome, " << name1 << " " << surname1 << "! You are " << age1 << " years old." << endl;
    cout << "\nWelcome, " << name2 << " " << surname2 << "! You are " << age2 << " years old." << endl;

    if (age1 > age2) {
        cout << name1 << " " << surname1 << " is older." << endl;
    } else if (age1 < age2) {
        cout << name2 << " " << surname2 << " is older." << endl;
    } else {
        cout << "Both " << name1 << " " << surname1 << " and " << name2 << " " << surname2 << " are of the same age." << endl;
    }

    double d, x1, y1, x2, y2;
    cout << "Enter a numbers: " << endl;
    cin >> x1 >> x2 >> y1 >> y2;

    d = sqrt(pow(x2 - x1, 2)+pow(y2 - y1, 2));
    cout << "The answer is: " << d << endl;

    string text = "AMOR VINCIT OMNIA.";
    string textChange = "NON VINCAT";

    text.replace(5, 6, textChange);
    cout << text;

    return 0;
}