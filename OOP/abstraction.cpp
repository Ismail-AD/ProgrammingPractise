#include <bits/stdc++.h>
using namespace std;
class Car
{
    // A pure virtual function is declared by assigning a zero (0) in its declaration. 
    virtual void StartEngine() = 0;
};
class Electric_Car : public Car
{
    public:
    void StartEngine() override
    {
        cout << "Engine ignition through button!\n";
    }
};
class Normal_Car : public Car
{
    public:
    void StartEngine() override
    {
        cout << "Engine ignition through key!\n";
    }
};
int main()
{
    Electric_Car c1;
    Normal_Car c2;
   
    c1.StartEngine();
    c2.StartEngine();
    return 0;
}