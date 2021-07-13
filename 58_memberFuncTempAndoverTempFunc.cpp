#include<iostream>
using namespace std;
template<class T>
class stu{
public:
T marks;
stu(T a){
    marks=a; 
}
    void display();
};
template <class T>
void stu<T>::display(){
    cout<<marks<<endl;
}


void func(int a){
    cout<<"1st func()"<<a<<endl;
}

template<class T>
void func(T a){
    cout<<"templatised func()"<<a<<endl;
}

template<class T>
void func1(T a){
    cout<<"templatised func()"<<a<<endl;
}
int main(){
    stu<int> s(6);
    //stu<float> s(6.7);
    cout<<s.marks<<endl;
    s.display();
   // func(4);     //exact match takes the highest priority
    func1(4);
    return 0;
}