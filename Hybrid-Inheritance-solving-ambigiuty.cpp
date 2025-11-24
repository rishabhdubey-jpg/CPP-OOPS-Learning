// How to resolve the ambiguity that occurs in hybrid inheritance?

/* Ans: Whenever a class inherites from two or more than two class it gets the behaviour of all those classes, also it gets the behaviour of the parent 
        of its parent's classes. Due to this this child class may have multiple copies of the attributes and the behaviours of its grand parent class. While accessing these
        copies c++ gets confused as to which copy from which parent is being called.
   This issue can be solved using any one of the following methods:
    1. Clarifying the copy using the scope resolution operator (::) in front of the variable or the method name.
    2. In heirarical inheritance the two more classes which are inheriting from a single base class should inherit virtually. 
       This results to create single copy in the class from the multiple classes.
*/
#include <iostream>
using namespace std;

class Car
{
public:
    string fueltype;

    void start()
    {
        cout << "Car started.." << endl;
    }
    void stop()
    {
        cout << "Car stopped.." << endl;
    }
};

class familyCar : public Car
{
};

class sportsCar : public Car
{
};

class Suv : public familyCar, public sportsCar
{
};

int main()
{
    Suv s1;
    // s1.start(); // Error: Ambiguity because start() is inherited from both familyCar and sportsCar
    // s1.stop(); // Error: Ambiguity because stop() is inherited from both familyCar and sportsCar
    
    // s1.fueltype(); // Error: Ambiguity because fueltype() is inherited from both familyCar and sportsCar
    s1.familyCar::fueltype = "Petrol";
    cout << "Fuel type of SUV: " << s1.familyCar::fueltype << endl;

    // we can also use virtual inheritance to solve this ambiguity problem.

    return 0;
}
