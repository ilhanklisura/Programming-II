//#6: Define a class named "Student" with attributes for name, age, and grade. Create get and set methods.
//Finally, create a list of students and find the average grade for all students in the list.

#include <iostream>
using namespace std;

class Student{
public:
    string name;
    int age;
    double grade;

    Student(string name, int age, double grade){
        this->name = name;
        this->age = age;
        this->grade = grade;
    }

    string getName(){
        return name;
    }

    float getAge(){
        return age;
    }

    int getGrade(){
        return grade;
    }

    void setName(string newName){
        name = newName;
    }

    void setAge(int newAge){
        age = newAge;
    }

    void setGrade(double newGrade){
        grade = newGrade;
    }
};

int main() {
    const int MAX_STUDENTS = 5;
    Student students[MAX_STUDENTS] = {
            Student("Alice", 18, 85.5),
            Student("Bob", 19, 76.2),
            Student("Charlie", 20, 92.0),
            Student("David", 19, 81.8),
            Student("Eve", 18, 88.9)
    };

    double totalGrade = 0;
    for (int i = 0; i < MAX_STUDENTS; ++i) {
        totalGrade += students[i].getGrade();
    }
    double averageGrade = totalGrade / MAX_STUDENTS;

    cout << "Average Grade: " << averageGrade << endl;

}