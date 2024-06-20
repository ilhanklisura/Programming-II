//#4: Create class Employee, with the following attributes:
//name (string): The name of the employee.
//employee_id (int): A unique identifier for the employee.
//department (string): The department the employee belongs to.
//salary (float): The salary of the employee.
//
//Implement the following functions:
//give_raise(self, amount: float) -> None: Increases the employee's salary by the given amount.
//promote(self, new_position: str, raise_amount: float) -> None: Promotes the employee to a new position and increases their salary by the given raise amount.
//display_details(self) -> None: Prints out the employee's details in a readable format.
//is_eligible_for_retirement(self) -> bool: Returns True if the employee's age is 65 or above, otherwise False

#include <iostream>
using namespace std;
class Employee{
public:
    string name;
    int employee_id;
    string department;
    float salary;
    int age;

    Employee(string newName, int employeeID, string newDepartment, float newSalary, int newAge){
        name = newName;
        employee_id = employeeID;
        department = newDepartment;
        salary = newSalary;
        age = newAge;
    }

    void give_raise(float amount){
        salary += amount;
    }

    void promote(string newPosition, float newSalary){
        department = newPosition;
        salary += newSalary;
    }

    bool is_eligible_for_retirement(){
        if(age > 65){
            return true;
        } else {
            return false;
        }
    }

    void display_details(){
        cout << "Employee's name is " << name << endl;
        cout << "Employee's id is " << employee_id << endl;
        cout << "Employee's salary is " << salary << endl;
        cout << "Employee's department is " << department << endl;
        cout << "Employee's age is " << age << endl;
    }

};

int main(){
    Employee emp1 = Employee("John", 29035, "IT", 50, 21);
    emp1.display_details();
    emp1.give_raise(100);
    emp1.promote("EEE", 200);
    cout << emp1.is_eligible_for_retirement();
    emp1.display_details();
}