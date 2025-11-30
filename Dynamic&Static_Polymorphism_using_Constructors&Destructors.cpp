// Write a c++ program to demonstrate dynamic polymorphism and dynamic dispatch.
#include <iostream>
using namespace std;

// In C++ there is table of pointers called vTable.
// This table is present in every generation of class to implement dynamic polymorphism.
// Each table for each class contains the pointers to the relevant functions, which should be called during the dynamic dispatch.

class Appliance
{
public:
    Appliance()
    {
        cout << "Appliance Constructed" << endl;
    }
    virtual ~Appliance() // Virtual destructor
    {
        cout << "Appliance Destructed" << endl;
    }
};

class Toaster : public Appliance
{
public:
    Toaster()
    {
        cout << "Toaster Constructed" << endl;
    }
    ~Toaster()
    {
        cout << "Toaster Destructed" << endl;
    }
};

class Oven : public Appliance
{
public:
    Oven()
    {
        cout << "Oven Constructed" << endl;
    }
    ~Oven()
    {
        cout << "Oven Destructed" << endl;
    }
};

int main()
{
    // Toaster appl1;  // Static object
    Appliance *appl2 = new Oven(); // Dynamic object
    delete appl2;                  // Freeing memory

    return 0;
}
