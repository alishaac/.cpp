#include <iostream>
using namespace std;
// If you want to catch exceptions of both a base class type and a derived class type, put the derived class first in the catch sequence. 
// If you don't do this, the base class catch will also catch all derived classes.
class B
{
};
class D : public B
{
};
int main()
{
    D derived;
    try
    {
        throw derived;
    }
    catch (B b)
    {
        cout << "Caught a base class.\n";
    }
    catch (D d)
    {
        cout << "This won't execute.\n";
    }
    return 0;
}
