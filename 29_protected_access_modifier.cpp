#include<iostream>
using namespace std;

class Base{
    protected:
        int a; 
    private:
        int b;
    public:
        int c=4;
        int output();

};
int Base::output()
{
    return c;
}
/*
For a protected member:
                            Public derivation     Private Derivation    Protected Derivation
    1. Private members       Not Inherited           Not Inherited         Not Inherited
    2. Protected members      Protected               Private              Protected
    3. Public members         Public                  Private              Protected
*/
class Derived: protected Base{
   public:
    void display();
};
void Derived ::display()
{
    cout << "Value of data 1 is " << output() << endl;
}

int main(){
    Base b;
    Derived d;
    Derived der;
    der.display();
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class
    return 0;
}