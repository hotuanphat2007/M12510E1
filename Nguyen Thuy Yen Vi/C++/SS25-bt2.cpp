#include <iostream>
using namespace std;
class Vehicle
{
    private:
        int year;
        string manufacturer;
    public:
        Vehicle(const string &make, int manufacturingYear)
        : manufacturer(make), year(manufacturingYear) {}
    void displayInfo()
        {
            cout << "Manufacturer: " << manufacturer << endl;
            cout << "Year: " << year << endl;
        }
};

class Car : public Vehicle
{
    private:
        string member;
        int numDoors;
    public:
        Car(const string &make, int manufacturingYear, const string &carModel, int doors)
        : Vehicle(make, manufacturingYear), member(carModel), numDoors(doors) {}
    void displayInfo()
            {
                Vehicle::displayInfo();
                cout << "Car Model: " << member << endl;
                cout << "Number of Doors: " << numDoors << endl;
            }
};

class Motocycle: public Vehicle
{
    private:
        string member_type;
    public:
        Motocycle (const string &make, int manufacturingYear, const string &bike_type )
        : Vehicle(make, manufacturingYear), member_type(bike_type) {}
    void displayInfo()
        {
            Vehicle::displayInfo();
            cout << "Type of Motorcycle: " << member_type << endl;
        }

};

class ElectricCar: public Car
{
    private:
        int batteryCapacity;
    public:
        ElectricCar(const string &make, int manufacturingYear, const string &carModel, int doors, int capacity)
        : Car(make, manufacturingYear, carModel,doors), batteryCapacity(capacity) {}
    void displayInfo()
    {
        Car::displayInfo();
        cout << "Capicity of the Electric Car: " << batteryCapacity << endl;
    }
};

int main()
{
    Vehicle Rollsroyce("New Clollection", 2025);
    Rollsroyce.displayInfo();
    cout << "-------------------" << endl;
    Car Bugatti("Chiron ", 2024, "Classic", 4);
    Bugatti.displayInfo();
    cout << "-------------------" << endl;
    Motocycle Ducati("New SuperSport", 2023 , "950 S");
    Ducati.displayInfo();
    cout << "-------------------" << endl;
    ElectricCar VinFast("VF9", 2022, "Plus", 2022, 2024);
    VinFast.displayInfo();
    cout << "-------------------" << endl;
    return 0;
}