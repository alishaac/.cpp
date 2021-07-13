#include<iostream>
using namespace std;
class base1{
    public:
void greet(){
    cout<<"hello people"<<endl;
}
};
class base2{
    public:
void greet(){
    
    cout<<"hello dear people"<<endl;
}
};
class derieved:public base1, public base2{
public:
void greet(){
    base1 :: greet();          // if we'll not define that we need greet from base 1 in derieved class it will show ambiguious behaviour
                              // as it dont know from which class greet  is to be inherited.
}
};

int main(){
    base1 obj1;
    obj1.greet();
    base2 obj2;
    obj2.greet();
    derieved obj;
    obj.greet();
    return 0;
}