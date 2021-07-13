#include <iostream>
using namespace std;

// Syntax for inheriting in multiple inheritance
// class DerivedC: visibility-mode base1, visibility-mode base2
// {
//      Class body of class "DerivedC"
// };

class marks_of_eng{
protected:
    int marks_of_eng1;

public:
    void set_marks_of_eng1(int a)
    {
       marks_of_eng1= a;
    }
};

class marks_of_maths{
protected:
    int marks_of_maths1;

public:
    void set_marks_of_maths1(int a)
    {
        marks_of_maths1 = a;
    }
};

class marks_of_phy{
protected:
    int marks_of_phy1;

public:
    void set_marks_of_phy1(int a)
    {
        marks_of_phy1 = a;
    }
};

class Derived : public marks_of_eng, public marks_of_maths, public marks_of_phy
{
    public: 
        float sum(){
            cout << "marks obt in english are " << marks_of_eng1<<endl;
            cout << "marks obt in maths are " << marks_of_maths1<<endl;
            cout << "marks obt in physics are " << marks_of_phy1<<endl;
            cout << "The sum of marks obt is " << marks_of_eng1 + marks_of_maths1 + marks_of_phy1 << endl;
        }
};
/*
The inherited derived class will look something like this:
Data members:
    base1int --> protected
    base2int --> protected

Member functions:
    set_base1int() --> public
    set_base2int() --> public
    set_show() --> public
*/
int main()
{
    Derived harry;
    harry.set_marks_of_eng1(10);
    harry.set_marks_of_maths1(8);
    harry.set_marks_of_phy1(9);
    harry.sum();
    
    return 0;
}