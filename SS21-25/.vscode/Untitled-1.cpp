#include <iostream>
#include <string>
using namespace std;

// ==========================
// Base Class: Vehicle
// ==========================
class Vehicle {
protected:
    string manufacturer;
    int year;

public:
    Vehicle(const string& make, int manufacturingYear) {
        manufacturer = make;
        year = manufacturingYear;
    }

    virtual void displayInfo() {
        cout << "Manufacturer: " << manufacturer << endl;
        cout << "Year: " << year << endl;
    }
};

// ==========================
// Derived Class: Car
// ==========================
class Car : public Vehicle {
private:
    string model;
    int numDoors;

public:
    Car(const string& make, int manufacturingYear,
        const string& carModel, int doors)
        : Vehicle(make, manufacturingYear) 
    {
        model = carModel;
        numDoors = doors;
    }

    void displayInfo() override {
        cout << "--- Car Information ---" << endl;
        Vehicle::displayInfo();
        cout << "Model: " << model << endl;
        cout << "Number of Doors: " << numDoors << endl;
    }
};

// ==========================
// Derived Class: Motorcycle
// ==========================
class Motorcycle : public Vehicle {
private:
    string type;

public:
    Motorcycle(const string& make, int manufacturingYear,
               const string& bikeType)
        : Vehicle(make, manufacturingYear) 
    {
        type = bikeType;
    }

    void displayInfo() override {
        cout << "--- Motorcycle Information ---" << endl;
        Vehicle::displayInfo();
        cout << "Type: " << type << endl;
    }
};

// ==========================
// Derived Class: ElectricCar
// ==========================
class ElectricCar : public Car {
private:
    int batteryCapacity;

public:
    ElectricCar(const string& make, int manufacturingYear,
                const string& carModel, int doors, int capacity)
        : Car(make, manufacturingYear, carModel, doors)
    {
        batteryCapacity = capacity;
    }

    void displayInfo() override {
        cout << "--- Electric Car Information ---" << endl;
        Car::displayInfo();
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }
};

// ==========================
// Main Function
// ==========================
int main() {
    Car c("Toyota", 2020, "Camry", 4);
    Motorcycle m("Honda", 2018, "Sport");
    ElectricCar e("Tesla", 2023, "Model S", 4, 100);

    cout << endl;
    c.displayInfo();

    cout << endl;
    m.displayInfo();

    cout << endl;
    e.displayInfo();

    return 0;
}
