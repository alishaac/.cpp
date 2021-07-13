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
    virtual void display() {}
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
