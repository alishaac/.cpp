#include<iostream>
using namespace std;
template<class T1=char,class T2 =float>
class stu{
public:
T1 name;
T2 rn;
stu(T1 x, T2 y){
    name=x;
    rn=y;
}
void display(){
    cout<<"name of student is : "<<name<<endl;
    cout<<"roll no of student is : "<<rn<<endl;
}
};

int main(){
    stu<> s('c',3);
    s.display();
    return 0;
}