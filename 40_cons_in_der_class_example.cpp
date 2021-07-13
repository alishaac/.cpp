#include<iostream>
using namespace std;
class consbase1{
    int a;
    public:
    consbase1(int a){
        this->a=a;
        cout<<"Cons of base 1 called"<<endl;
    }
    void printconsbase1(void){
        cout<</*"a is "<<a<<*/endl;
    }
};
class consbase2{
    int b;
    public:
    consbase2(int b)
    {
        this->b=b;
      
        cout<<"Const of base 2 called"<<endl;
    }
      void printconsbase2(void){
        cout<</*"b is "<<b<<*/endl;
    }
};
class consder:public consbase1,virtual public  consbase2{ 
    int c;
    public:
    consder(int a,int b,int c):consbase1(a),consbase2(b){
        this->c=c;
    cout<<"Cons of der class called"<<endl;
    }
      void printconsder(void){
        cout<</*"c is "<<c<<*/endl;
    }

};
int main(){
    consder cons(1,2,3);
    cons.printconsbase1();
    cons.printconsbase2();
    cons.printconsder();
    return 0;
}