#include <iostream>
using namespace std;
// you can have more than one catch associated with a try. In fact, it is common to do so. 
// However, each catch must catch a different type of exception.
//  For example, this program catches both integers and strings.
void excep(int test)
{
    try
    {
        if (test)
            throw test;
        else
            throw "Value is zero";
    }
		// responds to integer exception
    catch (int i)
    {
        cout << "Caught Exception #: " << i << '\n';
    }
		// responds to string exception
    catch (const char *str)
    {
        cout << "Caught a string: ";
        cout << str << '\n';
    }
}
int main()
{
    cout << "Start\n";
    excep(1);
    excep(5);
    excep('a');
    excep(0);
    cout << "End";
    return 0;
}
