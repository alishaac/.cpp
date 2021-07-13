/*These functions require the header <exception>
The terminate( ) function is called -
(a) whenever the exception handling subsystem fails to find a matching catch statement for an exception.
(b) if your program attempts to rethrow an exception when no exception was originally thrown.
By default, terminate( ) calls abort( ).

The unexpected( ) function is called -
when a function attempts to throw an exception that is not allowed by its throw list.
By default, unexpected( ) calls terminate( ).

To change the terminate handler, use set_terminate( ), shown here:
terminate_handler set_terminate(terminate_handler newhandler) throw( );

To change the unexpected handler, use set_unexpected( ), shown here:
unexpected_handler set_unexpected(unexpected_handler newhandler) throw( );
*/
  
#include <iostream>

using namespace std;

void Termi_handler(){
    cout<<"Inside new terminate handler\n";
    abort();
}

int main(){
    // set a new terminate handler
    set_terminate(Termi_handler);

    try{
        cout<<"Inside try"<<endl;
        throw 100; // throw an error
    }

    catch (double i){ 
        cout<<"I caught something"<<endl;
    }

    //But since an integer was thrown so terminate will be called
    return 0;
}



//uncaught_exception( )
//bool uncaught_exception( );

//This function returns true if an exception has been thrown but not yet caught. 
//Once caught, the function returns false.