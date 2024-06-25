#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
public:
    string company;
    string vehicleModel;
    string color;

    void inputDetails()
    {
        cout << "Enter Company: ";
        cin >> company;
        cout << "Enter Vehicle Model: ";
        cin >> vehicleModel;
        cout << "Enter Color: ";
        cin >> color;
    }
};

class TwoWheeler : public Vehicle
{
};

class FourWheeler : public Vehicle
{
};

class Bike : public TwoWheeler
{
public:
    void displayDetails()
    {
        cout << "\nBike Details:" << endl;
        cout << "Company: " << company << endl;
        cout << "Vehicle Model: " << vehicleModel << endl;
        cout << "Color: " << color << endl;
    }
};

class Cycle : public TwoWheeler
{
public:
    void displayDetails()
    {
        cout << "Cycle Details:" << endl;
        cout << "Company: " << company << endl;
        cout << "Vehicle Model: " << vehicleModel << endl;
        cout << "Color: " << color << endl;
    }
};

class Car : public FourWheeler
{
public:
    void displayDetails()
    {
        cout << "Car Details:" << endl;
        cout << "Company: " << company << endl;
        cout << "Vehicle Model: " << vehicleModel << endl;
        cout << "Color: " << color << endl;
    }
};

class Truck : public FourWheeler
{
public:
    void displayDetails()
    {
        cout << "Truck Details:" << endl;
        cout << "Company: " << company << endl;
        cout << "Vehicle Model: " << vehicleModel << endl;
        cout << "Color: " << color << endl;
    }
};

class Taxi : public FourWheeler
{
public:
    void displayDetails()
    {
        cout << "Taxi Details:" << endl;
        cout << "Company: " << company << endl;
        cout << "Vehicle Model: " << vehicleModel << endl;
        cout << "Color: " << color << endl;
    }
};

int main()
{
    int choice;
    int vehicleType;
    Bike bike;
    Cycle cycle;
    Car car;
    Truck truck;
    Taxi taxi;

    while (true)
        {
        cout << "Choose a vehicle type:" << endl;
        cout << "1. Two Wheeler" << endl;
        cout << "2. Four Wheeler" << endl;
        cout << "3. Exit" << endl;
        cin >> vehicleType;

        if (vehicleType == 3)
        {
            cout << "Exiting program." << endl;
            return 0;
        }

        switch (vehicleType)
        {
            case 1:
                cout << "Choose a two-wheeler type:" << endl;
                cout << "1. Bike" << endl;
                cout << "2. Cycle" << endl;
                cin >> choice;

                switch (choice)
                {
                    case 1:
                        bike.inputDetails();
                        bike.displayDetails();
                        break;
                    case 2:
                        cycle.inputDetails();
                        cycle.displayDetails();
                        break;
                    default:
                        cout << "Invalid choice!" << endl;
                }
                break;
            case 2:
                cout << "Choose a four-wheeler type:" << endl;
                cout << "1. Car" << endl;
                cout << "2. Truck" << endl;
                cout << "3. Taxi" << endl;
                cin >> choice;

                switch (choice)
                {
                    case 1:
                        car.inputDetails();
                        car.displayDetails();
                        break;
                    case 2:
                        truck.inputDetails();
                        truck.displayDetails();
                        break;
                    case 3:
                        taxi.inputDetails();
                        taxi.displayDetails();
                        break;
                    default:
                        cout << "Invalid choice!" << endl;
                }
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
