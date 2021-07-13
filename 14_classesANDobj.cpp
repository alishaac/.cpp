#include<iostream>
using namespace std;
class student{
private:
int phn_number;
int marks;
public:
int rn=1;
char section='a';
char name='m';
void enter_details(int phn_number1,int marks1); //declaration
void get_details(){
    cout<<"The roll no of student is: "<<rn<<endl;
    cout<<"The name of student is: "<<name<<endl;
    cout<<"The section of student is: "<<section<<endl;
    cout<<"The phn_number of student is: "<<phn_number<<endl;
    cout<<"The marks of student is: "<<marks<<endl;
}
};

void student :: enter_details(int phn_number1,int marks1){
    
    // rn=1;
    // name= 'b';
    // section= 'a';
    phn_number = phn_number1;
    marks = marks1;
}

int main(){
    student details;
    details.rn;
    details.name;
    details.section;
    details.enter_details(96662,9.5);
    details.get_details();
    
    
    return 0;
}