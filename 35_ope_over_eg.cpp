//Create a function to overload + operator to add two time variables :-
#include<iostream>
using namespace std;
class Time{ 
    private:
    int h,m,s;
    public:
    Time(){
        h=0;m=0;s=0;
    }
    Time(int a,int b,int c){
    h=a;
    m=b;
    s=c;
    }
    void show(){
        cout<<h<<":"<<m<<":"<<s<<endl;
    }
    //overloading
    Time operator +(Time t){
        Time temp;
    // tells proper time    
        int f,g;
        f=s+temp.s;
        temp.s=f%60; 
        g=(f/60)+m+t.m;
        temp.m=g%60;
        temp.h=(g/60)+h+t.h;
        temp.h=temp.h%12;
     // this one just adds time 
        //  temp.h=h+t.h;
        //  temp.m=m+t.m;
        //  temp.s=s+t.s;
         return temp;
    }
};
int main(){
    Time t1(5,15,34);
    Time t2(9,53,58);
    Time t3;
    t3=t1+t2;
    t3.show();
    return 0;
}




#include<iostream>
using namespace std;
class unaryop{
	int a,b,c;
	public:
		void getdata(int x,int y,int z){
			a=x;
			b=y;
			c=z;
		}
		void show(){
			cout<<"\n"<<a<<"\n"<<b<<"\n"<<c;
		}
        unaryop operator -(){
           a=-a;
	b=-b;
	c=-c; 
        }
};
// void unaryop::operator-(){
// 	a=-a;
// 	b=-b;
// 	c=-c;
// }
int main()
{
	unaryop op;
	op.getdata(5,10,15);
	op.show();
	-op;
	op.show();
	return 0;
}