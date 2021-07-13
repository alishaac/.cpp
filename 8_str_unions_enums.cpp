#include<iostream>
using namespace std;


                    //Structures are used to combine different types of data types, just like an array is used to combine the same type of data types
                    //using typedef at start and ep after }, we can type just ep in further code instead of struct employee 
// typedef struct employee 
// {
//     int eId; 
//     char favChar; 
//     float salary; 
// } ep;

                      //unions are similar to structures but they provide better memory management then structures. 
                     // Unions use shared memory so only 1 variable can be used at a time.
 union money 
{
    int rice; 
    char car; 
    float pounds; 
};


int main(){
                     //Enums are user-defined types which consist of named constants. 
                     //Enums are used to make the program more readable
//    enum Meal{ breakfast, lunch, dinner};
//     Meal m1 = lunch;
//     cout<<(m1)<<endl;     
//     cout<<breakfast<<endl;
//     cout<<lunch<<endl;
//     cout<<dinner<<endl;
                    //code for union 
    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    cout<<m1.car;
                    //code for struct
    // ep harry;                  //also u can use struct employee
    // struct employee carry;
    // struct employee merry;
    // harry.eId = 1;
    // harry.favChar = 'c';
    // harry.salary = 120000000;
    // cout<<"The value is "<<harry.eId<<endl; 
    // cout<<"The value is "<<harry.favChar<<endl; 
    // cout<<"The value is "<<harry.salary<<endl; 
    // merry.eId = 2;
    // merry.favChar = 'b';
    // merry.salary = 7376733;
    // cout<<"The value is "<<merry.eId<<endl; 
    // cout<<"The value is "<<merry.favChar<<endl; 
    // cout<<"The value is "<<merry.salary<<endl; 
    return 0;
}
