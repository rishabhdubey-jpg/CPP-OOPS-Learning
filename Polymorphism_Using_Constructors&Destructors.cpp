#include<iostream>
using namespace std;

class Demo{
    public: 
    int x;
    Demo(){
        x = 10;
        cout<<"Constructed"<<endl;
    }
    ~Demo(){
        cout<<"Destructed"<<endl;
}
};
int main(){
    Demo a;
    {
        Demo b;
    }
    Demo *c = new Demo();
    return 0;
}