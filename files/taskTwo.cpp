#include <iostream>
#include <fstream>

using namespace std;

int main() {
  
  ifstream my_file("/Users/ilhanklisura/ClangProjects/Programming-II/beatles.txt");
  string text;

  while (getline(my_file,text)) {
    for (int i=0;i<text.length();i++) {
      if (isupper(text[i])) {
        text[i]= tolower(text[i]);
        } else {
        text[i]= toupper(text[i]);
        }
      }
    cout<<text;
  }

}