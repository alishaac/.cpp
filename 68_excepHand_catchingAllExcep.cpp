#include <iostream>
using namespace std;
//               catch(...) { 
                //code
                 //}
// _process all exceptions_


void excep(int test)
{
    try
    {
        if (test == 0)
            throw test; // throw int
        if (test == 1)
            throw 'a'; // throw char
        if (test == 2)
            throw 123.23; // throw double

    }
    catch (int i)
    { // catch an int exception
        cout << "Caught an integer\n";
    }
    catch (char i)
    { // catch an char exception
        cout << "Caught a character\n";
    }
    // say we havent made this catch block for test==2 so the catch(...) will be executed for that

    // catch (double i)
    // { // catch an double exception
    //     cout << "Caught a double\n";
    // }
    
    catch (...)
    { // catch all other exceptions
        cout << "Caught One!\n";
    }
}
int main()
{
    cout << "Start\n";
    excep(0);
    excep(1);
    excep(2);
   
    cout << "End";
    return 0;
}
//RESTRICTING EXCEPTIONS:
     // This function can only throw ints, chars, and doubles:
     //                  void Xhandler1(int test) throw(int, char, double)
    // This function can throw NO exceptions! :
    //                   void Xhandler2(int test) throw()
/*  The function Xhandler1( ) may only throw integer, character, and double exceptions.
If it attempts to throw any other type of exception, an abnormal program termination will occur.
 (That is, unexpected( ) will be called.)    */
