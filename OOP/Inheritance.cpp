#include <bits/stdc++.h>
using namespace std;
// // Broad term
// class Vehicle
// {
// protected:
//     int b; // protected
// private:
//     int c; // private
// public:
//     Vehicle()
//     {
//         cout << "Vehicle Constructor!\n";
//     }
//     Vehicle(int Doors, string Brand)
//     {
//         doors = Doors;
//         brand = Brand;
//         cout << "Vehicle Parameterized Constructor!\n";
//     }
//     int doors = 0;
//     string brand = "";
//     ~Vehicle()
//     {
//         cout << "PARENT Destructor Called!\n";
//     }
// };
// // where mode of inheritance (like public after :) controls the access level of the inherited members of the base class in the derived class.

// // The Car IS-A Vehicle, so the Vehicle part must exist before the Car-specific parts can be added.so thats why parent constructor called first
// class Car : public Vehicle
// {
// public:
//     Car() : Vehicle()
//     {
//         cout << "Car Constructor!\n";
//     }
//     string model;
//     Car(string m, int drs, string br) : Vehicle(drs, br)
//     {
//         cout << "Parameterized Car Constructor!\n";

//         model = m;
//         doors = 4;
//         brand = "Ford";
//     }
//     ~Car()
//     {
//         cout << " CHILD Destructor Called!\n";
//     }
// };

// MultiLevel Inheritance
class Vehicle
{ // Base class
public:
    void start()
    {
        cout << "1.Vehicle started" << endl;
    }
};

class Car : public Vehicle
{ // Derived from Vehicle
public:
    void drive()
    {
        cout << "2.Car is driving" << endl;
    }
};

class SportsCar : public Car
{ // Derived from Car (multi-level)
public:
    void turboBoost()
    {
        cout << "3. Turbo Boost Activated!" << endl;
    }
};

// Level 1: Base class
// class Vehicle
// {
// protected:
//     string brand;
//     string model;
//     int year;
//     string color;
//     double price;

// public:
//     Vehicle(string b, string m, int y, string c, double p)
//         : brand(b), model(m), year(y), color(c), price(p) {}

//     void displayBasicInfo()
//     {
//         cout << year << " " << brand << " " << model << " (" << color << ")" << endl;
//     }

//     void startEngine()
//     {
//         cout << "Engine started for " << brand << " " << model << endl;
//     }

//     double getPrice() { return price; }
// };

// // Level 2: Inherits from Vehicle
// class Car : public Vehicle
// {
// protected:
//     int doors;
//     string transmissionType;
//     string fuelType;

// public:
//     Car(string b, string m, int y, string c, double p, int d, string trans, string fuel)
//         : Vehicle(b, m, y, c, p), doors(d), transmissionType(trans), fuelType(fuel) {}

//     void drive()
//     {
//         cout << "Driving " << brand << " " << model << " with " << transmissionType << " transmission" << endl;
//     }

//     void refuel()
//     {
//         cout << "Refueling with " << fuelType << endl;
//     }

//     void lockDoors()
//     {
//         cout << "All " << doors << " doors locked" << endl;
//     }
// };

// // Level 3: Inherits from Car
// class SportsCar : public Car
// {
// private:
//     int horsepower;
//     double topSpeed;
//     bool hasTurbo;
//     string racingMode;

// public:
//     SportsCar(string b, string m, int y, string c, double p, int d, string trans,
//               string fuel, int hp, double speed, bool turbo, string mode)
//         : Car(b, m, y, c, p, d, trans, fuel), horsepower(hp), topSpeed(speed),
//           hasTurbo(turbo), racingMode(mode) {}

//     void activateRacingMode()
//     {
//         cout << "Racing mode activated: " << racingMode << endl;
//         cout << "Horsepower: " << horsepower << " HP" << endl;
//     }

//     void accelerate()
//     {
//         cout << brand << " " << model << " accelerating to " << topSpeed << " mph" << endl;
//         if (hasTurbo)
//         {
//             cout << "Turbo engaged!" << endl;
//         }
//     }

//     void adjustSuspension()
//     {
//         cout << "Sport suspension adjusted for performance" << endl;
//     }
// };

// Multiple Inheritance 2 examples

class Camera
{
public:
    void takePhoto()
    {
        cout << "Taking a photo 📸" << endl;
    }
};

class Phone
{
public:
    void makeCall()
    {
        cout << "Making a call 📞" << endl;
    }
};

// Mobile inherits from both Camera and Phone
class Mobile : public Camera, public Phone
{
public:
    void useApp()
    {
        cout << "Using a mobile app 📱" << endl;
    }
};

class PowerManagement
{
protected:
    int batteryLevel;
    bool isCharging;

public:
    PowerManagement() : batteryLevel(100), isCharging(false) {}

    void checkBattery()
    {
        cout << "Battery level: " << batteryLevel << "%" << endl;
    }

    void startCharging()
    {
        isCharging = true;
        cout << "Charging started" << endl;
    }
};

class NetworkCapability
{
protected:
    string wifiSSID;
    bool isConnected;

public:
    NetworkCapability() : isConnected(false) {}

    void connectToWifi(string ssid)
    {
        wifiSSID = ssid;
        isConnected = true;
        cout << "Connected to " << ssid << endl;
    }

    void sendData(string data)
    {
        if (isConnected)
        {
            cout << "Sending data: " << data << endl;
        }
    }
};

class Smartphone : public PowerManagement, public NetworkCapability
{
private:
    string phoneNumber;
    string model;

public:
    Smartphone(string phone, string m) : phoneNumber(phone), model(m) {}

    void makeCall(string number)
    {
        if (batteryLevel > 5 && isConnected)
        {
            cout << "Calling " << number << " from " << phoneNumber << endl;
        }
    }

    void browseInternet()
    {
        if (batteryLevel > 10 && isConnected)
        {
            cout << "Browsing internet on " << model << endl;
            batteryLevel -= 5;
        }
    }
};

int main()
{
    // Car myCar("Mushtang", 3, "ford");
    // Car myCar2;
    // cout << "Doors: " << myCar.doors << " brand: " << myCar.brand << " Model: " << myCar.model << endl;
    SportsCar sc;
    sc.start();      // from Vehicle
    sc.drive();      // from Car
    sc.turboBoost(); // from SportsCar

    Mobile m;
    m.takePhoto(); // from Camera
    m.makeCall();  // from Phone
    m.useApp();    // from Mobile
    return 0;
}