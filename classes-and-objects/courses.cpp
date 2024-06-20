//#2: Create class Course and three objects of that class (Programming, Calculus, Physics).
//The class should have the following attributes:
//year, professor, grade
//Use constructors for creation of objects.
//Finally, find the average grade for all 3 courses of the current year.

#include <iostream>
using namespace std;

class Course{
public:
    int year;
    string professor;
    int grade;

    Course(int newYear, int newGrade, string newProf){
        year = newYear;
        grade = newGrade;
        professor = newProf;
    }

    int getYear() const {
        return year;
    }

    float getGrade() const {
        return grade;
    }

};

double calculateAverageGrade(Course c1, Course c2, Course c3, int currentYear){
    float sumGrades = 0;
    int count = 0;

    if (c1.getYear() == currentYear) {
        sumGrades += c1.getGrade();
        count++;
    }
    if (c2.getYear() == currentYear) {
        sumGrades += c2.getGrade();
        count++;
    }
    if (c3.getYear() == currentYear) {
        sumGrades += c3.getGrade();
        count++;
    }

    if(count > 0) {
        return sumGrades / count;
    } else {
        return 0;
    }
}

int main(){
    Course programming = Course(2024, 85, "Dr. Smith");
    Course calculus = Course(2024, 90, "Dr. Johnson");
    Course physics = Course(2023, 88, "Dr. Brown");

    int currentYear = 2024;

    float averageGrade = calculateAverageGrade(programming, calculus, physics, currentYear);
    cout << "Average grade for courses in " << currentYear << ": " << averageGrade << endl;

    return 0;
}