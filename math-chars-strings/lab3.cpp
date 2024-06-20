
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
  //#1: Consider these values: 5, 10
  //Using mathematical functions, find:
  //The smallest value,
  //The largest value.
  cout << "Minimum between 5 and 10 is: " << min(5, 10) << endl;
  cout << "Maximum between 5 and 10 is: " << max(5, 10);


  //#2: Find the following values:
  cout << "Square root of 64 is: " << sqrt(64) << endl;
  cout << "Rounding number 2.6 results in: " << round(2.6) << endl;
  cout << "Logarithm of 2 is: " << log(2) << endl;

  //#5. Consider the following string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

  string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  //you can calculate the size using length or size function
  cout << "Length of the string is: " << txt.length() << endl;
  cout << "Length of the string is: " << txt.size() << endl;

  cout << "First letter of the string is: " << txt[0] << endl;

  //there are multiple ways how you can get the last letter
  cout << "Last letter of the string is: " << txt[txt.length() - 1] << endl;
  cout << "Last letter of the string is: " << txt[txt.size() - 1] << endl;
  cout << "Last letter of the string is: " << txt.back() << endl;


  //#6. Write a C++ program to check whether a given number is a power of two or not.
  int num;

  cout << "Enter number: " << endl;
  cin >> num;

  //exclude zero immediately, since log of zero is undefined
  if (num <= 0) {
      cout << "Number can't be a power of 2.";
  }

  if (ceil(log2(num)) == floor(log2(num))){
      cout << "Number is power of 2." << endl;
  }
  else {
      cout << "Number is not power of 2." << endl;
  }


  //#7. Write a C++ program to ask 2 users to enter the name, surname and year of birth.
  //The program will then print out Welcome message for each.
  //Also, the program will calculate how old both people are.
  //Finally, the program will print out who is older.

  string n1, n2;
  int year1, year2;

  cout << "Enter first and last name for user 1: " << endl;
  getline(cin, n1);
  cout << "Enter year for user 1: " << endl;
  cin >>  year1;

  /*cin>> leaves the newline character (\n) in the iostream. If getline is used after cin>>,
  the getline sees this newline character as leading whitespace, thinks it is finished and stops reading any further.
  So, if you are going to use getline after cin, include ingore function to clean up the buffer
  Otherwise, it would just skip the next input*/

  cin.ignore();

  cout << "Enter first and last name for user 2: " << endl;
  getline(cin, n2);
  cout << "Enter year for user 2: " << endl;
  cin >>  year2;

  //Types of concatination in C++
  cout << "Welcome user 1 " << n1 << endl;
  cout << "Welcome user 2 " << n2 << endl;

  //Another way of concatination is appending, eg. :
  //fn1.append(ln2)
  //now, when we would print just fn1, we would an output that contains both values that we entered for fn1 and ln1

  if (2024 - year1 > 2024 - year2){

      cout << "User " << n1 << " is older than " << n2<< endl;
  }
  else if (2024 - year1 == 2024 - year2){
      cout << "Users are of the same age." << endl;
  }
  else {
      cout << "User " << n2 << " is older than " << n1 << endl;
  }

  //#8. Ask the user to enter coordinates of two points, and find the distance between them.
  //Round the distance to two decimal places.

  int x1, x2, y1, y2;
  double dist;

  cout << "Enter coordinated for point 1: " << endl;
  cin >> x1 >> y1;

  cout << "Enter coordinated for point 2: " << endl;
  cin >> x2 >> y2;

  dist = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));

  cout << "Distance between these two points is: " << round(dist*100)/100;

  //#9. Consider the following string sentence=”AMOR VINCIT OMNIA. ”
  //Change the “VINCIT” to “NON VINCAT”.

  string sentence="AMOR VINCIT OMNIA.";
  //Remember, spaces count as one character as well, when indexing

  cout << sentence[5]; //letter V starts here
  cout << "String after replacement is: " << sentence.replace(5, 6, "NON VINCAT");
  //5 is the index from where we are starting replacement
  //6 is the length of the string that we want to replace, in this case VINCIT

//#11. Suppose you need to estimate the area enclosed by four cities, given the GPS locations
// (latitude and longitude) of these cities, as shown in the following diagram.
// How would you write a program to solve this problem?

    //charlotte
    double x11 = 35.2270869;
    double y11 = -80.8431267;

    //atlanta
    double x22 = 33.7489954;
    double y22 = -84.3879824;

    //orlando
    double x3 = 28.5383355;
    double y3 = -81.3792365;

    //savannah
    double x4 = 32.0835407;
    double y4 = -81.0998342;

    //distance between charlotte and atlanta
    double dx = x22 - x11;
    double dy = y22 - y11;

    //distance between orlando and atlanta
    double dx1 = x3 - x22;
    double dy1 = y3 - y22;

    //distance between orlando and savannah
    double dx2 = x4 - x3;
    double dy2 = y4 - y3;

    //distance between savannah and charlotte
    double dx3 = x11 - x4;
    double dy3 = y11 - y4;

    //straight distance between orlando and charlotte
    double dxmiddle = x3 - x11;
    double dymiddle = y3 - y11;

    double charlotte_atlanta_distance = std::sqrt(dx * dx + dy * dy);
    double atlanta_orlando_distance = std::sqrt(dx1 * dx1 + dy1 * dy1);
    double orlando_savannah_distance = std::sqrt(dx2 * dx2 + dy2 * dy2);
    double savannah_charlote_distance = std::sqrt(dx3 * dx3 + dy3 * dy3);
    double middle_distance = std::sqrt(dxmiddle * dxmiddle + dymiddle * dymiddle);


    double sA = (charlotte_atlanta_distance + atlanta_orlando_distance + middle_distance) / 2;
    double areaA = std::sqrt(sA * (sA - charlotte_atlanta_distance) * (sA - atlanta_orlando_distance) * (sA - middle_distance));

    double sB = (orlando_savannah_distance + savannah_charlote_distance + middle_distance) / 2;
    double areaB = std::sqrt(sB * (sB - orlando_savannah_distance) * (sB - savannah_charlote_distance) * (sB - middle_distance));

    std::cout<<areaA+areaB;

    //#10.Create complex calculator using switch case.
  //The calculator should include:
  //Basic functions (+, - , *, /)
  //Logarithm,
  //Square root of a number,
  //Number to the power,
  //Trigonometric functions (sin, cos, tan)
  //Value rounded down and rounded up.

  cout << "Option 1: Addition\n";
  cout << "Option 2: Subtraction\n";
  cout << "Option 3: Multiplication\n";
  cout << "Option 4: Division\n";
  cout << "Option 5: Logarithm\n";
  cout << "Option 6: Square root\n";
  cout << "Option 7: Number to a certain power\n";
  cout << "Option 8: Sin, cos and tan\n";
  cout << "Option 9: Round up and down\n";
  cout << "Option 10: Just exit the program\n";

  int option, nu1, nu2;
  double nu3;
  cout << "Please choose appropriate option:\n";
  cin >> option;

  switch(option){
      case 1:
          cout << "Enter two numbers: " << endl;
          cin >> nu1 >> nu2;
          cout << "Result of addition is: " << nu1 + nu2 << endl;
          break;
      case 2:
          cout << "Enter two numbers: " << endl;
          cin >> nu1 >> nu2;
          cout << "Result of subtraction is: " << nu1 - nu2 << endl;
          break;
      case 3:
          cout << "Enter two numbers: " << endl;
          cin >> nu1 >> nu2;
          cout << "Result of multiplication is: " << nu1 * nu2 << endl;
          break;
      case 4:
          cout << "Enter two numbers: " << endl;
          cin >> nu1 >> nu2;
          cout << "Result of division is: " << nu1 / nu2 << endl;
          break;
      case 5:
          cout << "Enter one number: " << endl;
          cin >> nu1;
          if (nu1 != 0){
              cout << "Logarithm of  " << nu1 << " is " << log(nu1)<< endl;
          }
          else {
              cout << "Logarithm of 0 is undefined." << endl;
          }
          break;
      case 6:
          cout << "Enter one number: " << endl;
          cin >> nu1;
          if (nu1 >= 0){
              cout << "Square root of  " << nu1 << " is " << sqrt(nu1)<< endl;
          }
          else {
              cout << "Square root of negative numbers is in irrational set of numbers." << endl;
          }
          break;
      case 7:
          cout << "Enter two numbers: " << endl;
          cin >> nu1 >> nu2;
          cout << nu1 << " to the power of " << n2 << " is " << pow(nu1, nu2) << endl;
          break;
      case 8:
          cout << "Enter one number: " << endl;
          cin >> nu1;
          cout << " Sin of " << nu1 << " is " << sin(nu1) << endl;
          cout << " Cos of " << nu1 << " is " << cos(nu1) << endl;
          cout << " Tan of " << nu1 << " is " << tan(nu1) << endl;
          break;
      case 9:
          cout << "Enter one number: " << endl;
          cin >> nu3;
          cout << " Round up of  " << nu3 << " is " << ceil(nu3) << endl;
          cout << " Round down of  " << nu3 << " is " << floor(nu3) << endl;
          break;
      case 10:
          cout << "Exiting...." << endl;
          break;
  }

    return 0;
}