#include <iostream>
#include <fstream>
using namespace std;
int main()
{

/*In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:

1.Using the constructor
2.Using the member function open() of the class*/

// here is the 1st method :

    // Opening files using constructor and writing it
    string str = "this is input which i wanted to write in this sample file";
    ofstream fout("51_sample1.txt"); // Write operation
    fout << str;
   
    // Opening files using constructor and reading it
    string str1;
    ifstream fin("51_sample2.txt"); // Read operation
    //input>>str1;                   //prints 1st word of line 1
    getline(fin, str1);            //prints 1st line
    getline(fin, str1);            //prints 2nd line
    cout << str1;
    cout<<endl; 

  //Formatting example

	cout<<showpos<<10.1234<<endl; //show +/- sign

	cout.precision(4); //total display digits

	cout<<-12.34567<<endl;

	cout.width(5); // Right justify with 5 char

	cout << 'c' <<endl;


    return 0;
}