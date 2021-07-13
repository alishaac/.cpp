//Templates are powerful features of C++ which allows you to write generic programs.
//  In simple terms, you can create a single function or a class to work with different data types using templates.
//  Templates are often used in larger codebase for the purpose of code reusability and flexibility of the programs.


#include<iostream>
using namespace std;
template <typename T>
T Mymax(T x,T y){
    return (x>y)?x:y;
}
int main(){
    cout<<Mymax<int>(3,8)<<endl;
    cout<<Mymax<double>(3.2,3.8)<<endl;
    cout<<Mymax<char>('a','z')<<endl;
    return 0;
}


