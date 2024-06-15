#include <iostream>

using std::endl;
using std::cout;
using std::cin;

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

  return 0;
}