#include <iostream>
#include <string>
#include <vector>
#include <memory>
using namespace std;
class Vehicle {
protected:
    string manufacturer;
    int year;
public:
    Vehicle(const string& make, int manufacturingYear)
        : manufacturer(make), year(manufacturingYear) {}
    virtual ~Vehicle() = default;
    virtual void displayInfo() const {
        cout << "Manufacturer: " << manufacturer << "\n";
        cout << "Year: " << year << "\n";
    }
};
class Car : public Vehicle {
private:
    string model;
    int numDoors;
public:
    Car(const string& make, int manufacturingYear, const string& carModel, int doors)
        : Vehicle(make, manufacturingYear), model(carModel), numDoors(doors) {}
    void displayInfo() const override {
        Vehicle::displayInfo();
        cout << "Car Model: " << model << "\n";
        cout << "Number of Doors: " << numDoors << "\n";
    }
};
class Motorcycle : public Vehicle {
private:
    string type;
public:
    Motorcycle(const string& make, int manufacturingYear, const string& bikeType)
        : Vehicle(make, manufacturingYear), type(bikeType) {}
    void displayInfo() const override {
        Vehicle::displayInfo();
        cout << "Motorcycle Type: " << type << "\n";
    }
};
class ElectricCar : public Car {
private:
    int batteryCapacity;
public:
    ElectricCar(const string& make, int manufacturingYear,
                const string& carModel, int doors, int capacity)
        : Car(make, manufacturingYear, carModel, doors), batteryCapacity(capacity) {}
    void displayInfo() const override {
        Car::displayInfo();
        cout << "Battery Capacity: " << batteryCapacity << " kWh\n";
    }
};
int main() {
    Car car("Toyota", 2020, "Camry", 4);
    Motorcycle bike("Yamaha", 2018, "Sport");
    ElectricCar ecar("Tesla", 2023, "Model 3", 4, 60);
    cout << "=== Direct Objects ===\n\n";
    cout << "[Car]\n";
    car.displayInfo();
    cout << "\n";
    cout << "[Motorcycle]\n";
    bike.displayInfo();
    cout << "\n";
    cout << "[ElectricCar]\n";
    ecar.displayInfo();
    cout << "\n";
    cout << "=== Polymorphism via Vehicle* ===\n\n";
    vector<unique_ptr<Vehicle>> vehicles;
    vehicles.push_back(make_unique<Car>("Honda", 2019, "Civic", 4));
    vehicles.push_back(make_unique<Motorcycle>("Suzuki", 2017, "Cruiser"));
    vehicles.push_back(make_unique<ElectricCar>("VinFast", 2024, "VF 8", 5, 87));
    for (const auto& v : vehicles) {
        v->displayInfo();
        cout << "----------------------\n";
    }
return 0;
}
