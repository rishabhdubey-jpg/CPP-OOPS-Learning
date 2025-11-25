// Write a c++ program to demonstrate dynamic polymorphism and dynamic dispatch.
#include <iostream>
using namespace std;

class Appliance
{
public:
    virtual void start()
    {
        cout << "Generic Appliance" << endl;
    }
};

class Toaster : public Appliance
{
public:
    void start()
    {
        cout << "Toaster coils heating up" << endl;
    }
};

class Oven : public Appliance
{
public:
    void start()
    {
        cout << "Oven Preheating" << endl;
    }
};

void runAppliance(Appliance *appl)
{
    appl->start();
}

int main()
{
//     Appliance *appl1 = new Toaster();
//     Appliance *appl2 = new Oven();
//     runAppliance(appl1);
//     runAppliance(appl2);
    Appliance *appl1[2] = {new Toaster, new Oven};

    for (int i = 0; i < 2; i++)
    {
        appl1[i]->start();
    }
    
    return 0;
}