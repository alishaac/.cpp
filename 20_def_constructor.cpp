#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(void); //default constructor
    void print()
    {
        cout << "the complex no is " << a << "+" << b << " i" << endl;
    }
};

complex::complex(void)
{
    a = 0;
    b = 0;
}
int main()
{
    complex c1, c2;
    c1.print();
    c2.print();
    return 0;
}