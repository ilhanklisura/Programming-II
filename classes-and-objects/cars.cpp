//#1: Create class Car and two objects of that class (Toyota and Peugeot).
//The class should have the following attributes:
//model, year_created, color, price

#include <iostream>

using namespace std;

class Car{
public:
    string model;
    int year_created;
    string color;
    int price;

    Car(string newModel, int newYear, string newColor, int newPrice){
        model = newModel;
        year_created = newYear;
        color = newColor;
        price = newPrice;
    }

};

int main(){

    Car toyota = Car("SUV", 2023, "Red", 700000);
    Car peugeot = Car("Sedan", 2024, "Black", 1200000);

    cout << toyota.year_created << endl;
    cout << toyota.model << endl;
    cout << toyota.price << endl;
    cout << toyota.color << endl;

}