#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // connecting our file with hout stream
    ofstream fout("51_sample1.txt");

    // creating a name string variable and filling it with string entered by the user
    string name;
    cout << "Enter your name: ";
    cin >> name;

    // writing a string to the file
    fout << " My name is : "<< name;

    // disconnecting our file
    fout.close();

    // connecting our file with hin stream
    ifstream fin("51_sample1.txt");

    // creating a content string variable and filling it with string present there in the text file
    string content;
   
    getline(fin,content);
    cout << "The content of the file is: " << content;

    // disconnecting our file
    fin.close();
    return 0;
}
