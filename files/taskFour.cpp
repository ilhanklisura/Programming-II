#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ifstream numbers_file("/Users/ilhanklisura/ClangProjects/Programming-II/files/numbers.txt");
  string num_text;
  int num=0;
  int sum=0;
  while (getline(numbers_file, num_text)){
    num=stoi(num_text);
    sum=sum+num;
  }
  cout<<sum<<endl;
  numbers_file.close();
}