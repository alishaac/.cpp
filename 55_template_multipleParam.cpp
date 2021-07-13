#include<iostream>
#include<string>
using namespace std;
/*syntax:
template <class T1,CLASS T2....>
class nameofclass{
body
};
*/
template <class T1,class T2,class T3>
class student{
    public:
    T1 name;
    T2 rollno;
    T3 marks;
    student(T1 a , T2 b,T3  c){
        name=a;
        rollno = b;
        marks=c;
    }
    void display(){
        cout<<this->name<<endl<<this->rollno<<endl<<this->marks;
    }

};

int main(){
    student<char,int,float> obj('a',1,9.5);
    obj.display();
    return 0;
}