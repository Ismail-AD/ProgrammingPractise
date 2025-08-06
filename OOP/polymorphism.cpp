#include <bits/stdc++.h>
using namespace std;
class Calculator
{
public:
    // same function name but different params type
    float sumIt(float a, float b)
    {
        cout << "FLoat: I am called !\n";
        return a + b;
    }
    int sumIt(int a, int b)
    {
        cout << "Int: I am called !\n";
        return a + b;
    }
    long sumIt(long a, long b)
    {
        cout << "Long: I am called !\n";
        return a + b;
    }
};
class MyString
{
public:
    string mystr;
    MyString() : mystr() {}
    MyString(string s) : mystr(s) {}
    //  // Overloading the '+' operator for our class
    MyString operator+(MyString &mystrObejct)
    {
        cout << "Opeartor overloading callded\n";
        MyString result;
        // chnage style of addition according to your case
        result.mystr = this->mystr + " " + mystrObejct.mystr;
        return result;
    }
    void display()
    {
        cout << "String is " << mystr << endl;
    }
};
class Car
{
public:
    virtual void StartEngine()
    {
        cout << "Engine started!" << endl;
    };
};
class Electric_Car : public Car
{
public:
    void StartEngine()
    {
        cout << "Engine ignition through button!\n";
    }
};
class Normal_Car : public Car
{
public:
    void StartEngine()
    {
        cout << "Engine ignition through key!\n";
    }
};
int main()
{
    // fun oveloading
    // Calculator c1;
    // cout << "Integer sum : " << c1.sumIt(1, 1) << endl;
    // cout << "Float sum : " << c1.sumIt(3.5f, 2.5f) << endl;
    // cout << "Long sum : " << c1.sumIt(120L, 120L) << endl;

    // compile time operator overloading
    // MyString s1("ISMAIL");
    // MyString s2("ASIM");
    // MyString res = s1 + s2;
    // res.display();

    // runtime implementation determination which car engine to start
    // Why It Works:
    // virtual keyword - Tells compiler "decide at runtime"
    // Base class pointer - Car* can point to any Car-derived object
    // Runtime decision - Program looks at actual object type (ElectricCar) and calls its function

    // new RedCar() - This creates a RedCar object in memory
    // Car* car1 - This is just a pointer variable of type Car*
    // No Car object is created - Only a RedCar object exists

    // IF WE REMOVE OVVERIDE KEYWORD AND DIRECT CREATE EKECTRIC CAR THEN WILL WORK (FUN OVERRIDE)
    Car *car1 = new Electric_Car();
    car1->StartEngine();
    Car c2;
    c2.StartEngine();
    return 0;
}