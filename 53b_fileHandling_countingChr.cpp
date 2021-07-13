
#include<iostream>
#include<fstream>
using namespace std;
int main(){
// how to count characters in a file

ifstream fin;
int count = 0; 
char ch; 
fin.open("51_sample1.txt");
while(!fin.eof()) 
{ 
	fin.get(ch); 
	count++; 
    cout<<count<<endl;
}

// how to count words in a file

 count = 0; 
char word[3]; 
while(!fin.eof()) 
{ 
	fin >> word; 
	count++; 
     cout<<count<<endl;
}

// how to count lines in a file

 count = 0; 
char str[5];

while(!fin.eof()) 
{ 
	fin.getline(str,5); 
	count++; 
     cout<<count<<endl;
}
return 0;
}