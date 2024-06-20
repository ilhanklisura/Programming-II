//#5:  Create class Car, with the following attributes:
//brand (string): The brand of the car.
//model (string): The model of the car.
//year (int): The year the car was manufactured.
//color (string): The color of the car.
//mileage (float): The mileage of the car (in kilometers).
//fuel_capacity (float): The fuel capacity of the car (in liters).
//fuel_level (float): The current fuel level of the car (in liters).
//service_due (bool): Indicates whether a service is due for the car.
//display_details(): Displays the details of the car.
//update_mileage(float new_mileage): Updates the mileage of the car.
//refuel(float fuel_amount): Adds fuel to the car's fuel tank.
//check_service_status(): Checks if a service is due for the car.
//service(): Performs a maintenance service on the car.
#include <iostream>
using namespace std;
class Car{
public:
    string brand;
    string model;
    int year;
    string color;
    float mileage;
    float fuel_capacity;
    float fuel_level;
    bool service_due;


    Car(string brand,string model,int year,string color,float mileage,float fuel_capacity,float fuel_level,bool service_due){
        this->brand = brand;
        this->model = model;
        this->year = year;
        this->color= color;
        this->mileage = mileage;
        this->fuel_capacity = fuel_capacity;
        this->fuel_level = fuel_level;
        this->service_due = service_due;
    }

    void display_details() const {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Color: " << color << endl;
        cout << "Mileage: " << mileage << " km" << endl;
        cout << "Fuel Capacity: " << fuel_capacity << " liters" << endl;
        cout << "Fuel Level: " << fuel_level << " liters" << endl;
        cout << "Service Due: " << (service_due ? "Yes" : "No") << endl;
    }

    void update_mileage(float new_mileage) {
        mileage = new_mileage;
        if (mileage >= 50000.0) {
            service_due = true;
        }
    }

    void refuel(float fuel_amount) {
        if (fuel_level + fuel_amount <= fuel_capacity) {
            fuel_level += fuel_amount;
        } else {
            cout << "Fuel tank full. Cannot add more fuel." << endl;
        }
    }

    bool check_service_status() {
        return service_due;
    }

    void service() {
        if (service_due) {
            cout << "Service Completed Successfully" << endl;
            service_due = false;
        } else {
            cout << "No service needed" << endl;
        }
    }
};

int main() {
    Car car1 = Car("Toyota", "Corolla", 2020, "White", 25000.0, 50.0, 33.5, false);
    Car car2 = Car("Honda", "Civic", 2018, "Black", 40000.0, 45.0, 20.0, false);
    Car car3 = Car("Ford", "Mustang", 2019, "Blue", 60000.0, 60.0, 54, false);

    cout << "Car Details:" << endl;
    car1.display_details();
    cout << endl;

    cout << "Updating mileage of Toyota Corolla..." << endl;
    car1.update_mileage(30000.0);


    cout << "Checking service status..." << endl;
    cout << "Service Due for Toyota Corolla: " << (car1.check_service_status() ? "Yes" : "No") << endl;


    cout << "Refueling Toyota Corolla..." << endl;
    car1.refuel(10.0);
    cout << endl;

    cout << "Servicing Toyota Corolla..." << endl;
    car1.service();


    return 0;
}