#include <iostream>
using namespace std;

class Vehicle
{
protected:
    string manufacturer;
    int year;

public:
    Vehicle(const string &make, int manufacturingYear)
    {
        manufacturer = make;
        year = manufacturingYear;
    }

    virtual void displayInfo()
    {
        cout << "Manufacturer: " << manufacturer << endl;
        cout << "Year: " << year << endl;
    }
};

class Car : public Vehicle
{
protected:
    string model;
    int numDoors;

public:
    Car(const string &make, int manufacturingYear, const string &carModel, int doors)
        : Vehicle(make, manufacturingYear), model(carModel), numDoors(doors) {}

    void displayInfo()
    {
        cout << "Manufacturer: " << manufacturer << endl;
        cout << "Year: " << year << endl;
        cout << "Model: " << model << endl;
        cout << "Doors: " << numDoors << endl;
    }
};

class Motorcycle : public Vehicle
{
private:
    string type;

public:
    Motorcycle(const string &make, int manufacturingYear, const string &bikeType)
        : Vehicle(make, manufacturingYear), type(bikeType) {}
    void displayInfo()
    {
        cout << "Manufacturer: " << manufacturer << endl;
        cout << "Year: " << year << endl;
        cout << "Type: " << type << endl;
    }
};

class ElectricCar : public Car
{
private:
    int batteryCapacity;

public:
    ElectricCar(const string &make, int manufacturingYear, const string &carModel, int doors, int capacity)
        : Car(make, manufacturingYear, carModel, doors), batteryCapacity(capacity) {}

    void displayInfo()
    {
        cout << "Manufacturer: " << manufacturer << endl;
        cout << "Year: " << year << endl;
        cout << "Model: " << model << endl;
        cout << "Doors: " << numDoors << endl;
        cout << "Battery capacity: " << batteryCapacity << endl;
    }
};

int main()
{
    Car car = Car("Mazda", 2020, "Mazda 3", 4);
    Motorcycle motor = Motorcycle("Kawasaki", 2019, "Ninja400");
    ElectricCar electricCar = ElectricCar("Vinfast", 2025, "VF7", 5, 99);

    Vehicle *p;
    p = &car;
    p->displayInfo();

    p = &motor;
    p->displayInfo();

    p = &electricCar;
    p->displayInfo();
}