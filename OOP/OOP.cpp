#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
public:
    int *width;
    int *height;

    Rectangle(int value, int value2)
    {
        width = new int(value);
        height = new int(value2);
    }
    void show()
    {
        cout << "width: " << width << " height: " << height << endl;
        cout << "width: " << *width << " height: " << *height << endl;
    }
    void update()
    {
        // Point to new memory
        // delete width;
        // delete height;
        // width = new int(40);
        // height = new int(50);
        // Change value directly
        *width = 30;
        *height = 60;
    }
    // shallow Copy (by default copying mechanism)
    // Rectangle(Rectangle &obj)
    // {
    //     // Only copying the pointer addresses (not the values they point to)
    //     width = obj.width;
    //     height = obj.height;
    // }
    // Deep Copy
    // Rectangle(Rectangle &obj)
    // {
    //     // Only copying the pointer addresses (not the values they point to)
    //     width = new int(*obj.width);

    //     height = new int(*obj.height);
    // }
};
class Person
{

private:
    string i_am_private_member;

public:
    Person()
    {
        luckyNumber = new int(12);
        cout << "Default No Params Constrcutor Called!\n";
    }
    Person(int Age, string Name)
    {
        age = Age;
        name = Name;
        cout << "Paramterized Constrcutor Called!\n";
    }
    Person(Person &p)
    {
        age = p.age;
        name = p.name;
        cout << "Copy Constrcutor Called!\n";
    }
    int age;
    int weight;
    int *luckyNumber;
    string name;
    string i_am_public_member;
    void iamfunctioninside()
    {
        cout << "i am function inside class\n";
    }
    void iamfunctionoutside();
    int myweight(int w);

    ~Person()
    {
        delete luckyNumber; // need to write custom constructor
        cout << "--Destructor Called!\n";
    }
};

void introduceMe()
{
    Person p(10, "Adil");
    cout << "Function is going to end \n";
}
void Person::iamfunctionoutside()
{
    cout << "i am function outside class\n";
}
int Person::myweight(int w)
{
    return w;
}
int main()
{
    // Person p2(10, "Ali");
    // Person p1;
    // Person p3(17, "Akbar");
    // Person p4(p3);

    // cout << "For p4 object: " << p4.age << " " << p4.name << endl;

    // p1.age = 23;
    // p1.name = "ismail";
    // cout << p1.age << p1.name << endl;
    // p1.iamfunctionoutside();
    // p1.iamfunctioninside();

    // cout << "Weight is " << p1.myweight(56) << " kg\n";

    // p1.i_am_public_member = "can be accesed and modified";
    // p1.i_am_private_member = "can't be accesed and modified give error uncomment it";

    Rectangle rec(10, 20);
    Rectangle rec2 = rec;

    rec.show();
    rec2.show();
    rec.update();
    cout << "New memory allocated and value as well" << endl;
    rec.show();
    rec2.show();
    // introduceMe(); // 1. Destructor called when function ends
    // Person *per = new Person();
    // delete per; // 3. calling destructor by using delete
    // cout << "Main";
    return 0;
} // 2. ← Program ends, globalObj destroyed, destructor called