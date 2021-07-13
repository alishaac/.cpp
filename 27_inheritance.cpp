// single inheritance  : a->b :father->(se bna)son
                       // : b<-a : son(derived from)father
    //a derived class with only one base class.
//multiple inheritance : a and b -> : parents -> son
    //a derived class with more than one base class
//hierarchical inheritanc : c->a and
                        //   ->b :father->sons
       // several derived classes from a single base class                       
//multilevel inheritance : a->b->c
      //deriving a class from already derived class                      
// hybrid inheritance : a-> b and c ->d
    //combination of multiple and multilevel inheritance..a class is derived from 2 classes aas in multiple inh..one of the parents class is not a base class.

#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }

    Employee() {}
};

// Derived Class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Note:
1. Default visibility mode is private
2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
3. Private Visibility Mode: Public members of the base class becomes Private members of the derived class
4. Private members are never inherited
*/

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode ;
        cout<<"enter languageCode";
        cin>>languageCode;
    }
    void getData(){
        cout<<id<<endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl;
    skillF.getData();
    return 0;
}