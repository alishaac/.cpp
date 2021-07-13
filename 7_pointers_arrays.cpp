//arrays
#include<iostream>
using namespace std;
int main(){
	int marks[4]={2,3,4,5};            //create array
	cout<<marks[0]<<endl;              //print values
	cout<<marks[1]<<endl;
	cout<<marks[2]<<endl;
	marks[3]=6;                         // we can change the value in between too
	cout<<marks[3]<<endl;
	for (int i=0;i<4;i++)
{
	cout<<"value of mark " <<i<<" is "<< marks[i]<<endl; // can be printed using loops too
}
// arrays and pointers

int* p=marks;        //creating pointer
cout<<*(++p);       //3
cout<<*(p++);         //2
cout<<*(++p);         //24
cout<<"value of *p is "<<*p<<endl;
cout<<"value of *(p+1) is "<<*(p+1)<<endl;
cout<<"value of *(p+2) is "<<*(p+2)<<endl;
cout<<"value of *(p+3) is "<<*(p+3)<<endl;
	return 0;		
}