#include <iostream>
#include <cstring>
using namespace std;
class ExceptionClass
{
public:

    char str_a[10];
    int a;
    ExceptionClass()
    {
        *str_a = 0;
        a = 0;
    }
    ExceptionClass(const char *s, int e)
    {
        strcpy(str_a, s);
        a = e;
    }
};
int main()
{
    int i;
    try
    {
        cout << "Enter a positive number: ";
        cin >> i;
        if(i>0){
        cout<<"yes positive: "<<i;
        }
       else if (i < 0)
            throw ExceptionClass("Not Positive", i);
    }
    catch (ExceptionClass e)
    { // catch an error
        cout << e.str_a << ": ";
        cout << e.a << "\n";
    }
    
    return 0;
}
