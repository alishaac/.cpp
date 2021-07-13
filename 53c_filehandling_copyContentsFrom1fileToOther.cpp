// Copy contents of one file into another

#include<iostream>
#include<fstream>

using namespace std;

int main() {
	char ch;
	ifstream fin("51_sample1.txt");
	ofstream fout("51_sample2.txt");

	while(!fin.eof()) 
	{
		fin.get(ch);
		fout << ch;
	}

	fin.close(); 
	fout.close();
	

}
