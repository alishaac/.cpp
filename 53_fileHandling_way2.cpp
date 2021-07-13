#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    //here is the way 2 using open() and use of eof()
    // for using eof we use #include<string> also

    ofstream fout;
    fout.open("51_sample1.txt");
    fout<<"this is the line 1\n";
    fout<<"this is the line 2\n";
    fout<<"this is the line 3\n";
    fout<<"this is the line 4\n";
    fout.close();

    ifstream fin;
    string st,st2;
    fin.open("51_sample1.txt");
    while(fin.eof()==0){
        getline(fin,st);
        cout<<st<<endl;
    }

    // open and Check if file has successfully been opened
    ifstream in("51_sample3.txt");
    if (!in){
	cout << "Cannot open the file \n";
	return 1;
}
    fin.close();
    
    return 0;
}