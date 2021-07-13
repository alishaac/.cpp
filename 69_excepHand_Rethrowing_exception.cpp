#include <iostream>
using namespace std;
void excep()
{
    try
    {
        throw "hello"; // throw a char *
    }
    catch (const char *)
    { // catch a char *
        cout << "Caught char * inside excep\n";
        throw; // rethrow char * out of function
    }
}
int main()
{
    cout << "Start\n";
    try
    {
        excep(); // throws an exception
    }
    catch (const char *)
    {
        cout << "Caught char * inside main\n";
    }
    cout << "End";
    return 0;
}
