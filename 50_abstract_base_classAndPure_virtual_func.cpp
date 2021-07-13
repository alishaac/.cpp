/*
Pure Virtual Functions in C++ :
Pure virtual function is a function that doesn’t perform any operation and the function is declared by assigning the value 0 to it.
Pure virtual functions are declared in abstract classes.


Abstract Base Class in C++  :
Abstract base class is a class that has at least one pure virtual function in its body. 
The classes which are inheriting the base class must need to override the virtual function of the abstract class otherwise compiler will 
throw an error.
*/

// IN the previous file 49th if we write  :

//virtual void display() {}   as    virtual void display()=0;

// it becomes a pure virtual function void “display” which is declared by 0. The main thing to note here is that as the “display” function
//is a pure virtual function it is compulsory to redefine it in the derived classes.

// now after defining it as pure vir func the class becomes an abstract class and now if we dont redefine the display in academic and sports classes
//it will give error.

#include <iostream>
#include <string>
using namespace std;
class Student
{
protected:
    string title;
    string name;
    int rollNo;

public:
    Student(string t, string n, int r)
    {
        title = t;
        name = n;
        rollNo = r;
    }
    virtual void display()=0;  //-> do_ntg_function-->pure vir func
};
class academic : public Student
{
    float aca_marks;

public:
    academic(string t, string n, float r, float am) : Student(t, n, r)
    {
        aca_marks = am;
    }
    void display()
    {
        cout << "title of profile is " << title << endl;
        cout << "name of the student is " << name << endl;
        cout << "Roll no is: " << rollNo << endl;
        cout << "academic marks of the student are : " << aca_marks << endl;
    }
};

class sports : public Student
{
    float sports_marks;

public:
    sports(string t, string n, float r, float sm) : Student(t, n, r)
    {
        sports_marks = sm;
    }
    void display()
    {
        cout << "title of profile is " << title << endl;
        cout << "name of the student is " << name << endl;
        cout << "Roll no is: " << rollNo << endl;
        cout << "sports marks of the student are : " << sports_marks << endl;
    }
};

int main()
{
    string name;
    string title;
    int rollNo;
    float aca_marks, sports_marks;

    //aca marks:
    name = "Alisha";
    title = "Academic marks";
    rollNo = 1;
    aca_marks = 90;
    academic aca(title, name, rollNo, aca_marks);

    //sports marks:
    title = "Sports marks";
    name = "Alisha";
    rollNo = 1;
    sports_marks = 95;
    sports sp(title, name, rollNo, sports_marks);

    Student *marks_distribution[2];
    marks_distribution[0] = &aca;
    marks_distribution[0]->display();
    marks_distribution[1] = &sp;
    marks_distribution[1]->display();

    return 0;
}
