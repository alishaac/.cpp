#include <iostream>
using namespace std;
int main()
{
    // without exep handling:

    // int num, den;
    // cout << "enter the num and the den : ";
    // cin >> num;
    // cin >> den;
    // int result = num / den;
    // cout << "the division is :" << result;

    //---------------------------------------------------------------------------------------------------------------------------
    //with exep hand:

    // when we execute the program , if we'll put den as 0 the prog will crash.
    //so we need to use the exception handling to protect our prog from crashing.
    int num, den, result;
    cout << "enter the num and the den : ";
    cin >> num;
    cin >> den;

    try
    {
        if(den!=0){
            result=num/den;
            cout << "div is : " << result;
        }
        else if (den == 0)
        {
            throw den; //transfer thrown to catch block
        }
        result = num / den; // we know that the prog can crash at this line of code coz it executes the result..
                            //so we'll put this part under the try block,define the execption here and throw some value to this.
                            //and after we need to build the catch block and put the result output statement there which we want to show
    }
    catch (int exception)
    {
        cout << "Exception : division by 0 isnt allowed";
    }


    return 0;
}