#include<iostream>
#include<vector>
using namespace std;
// void display(vector<int> &v){
// for (int i = 0; i < v.size(); i++)
// {
//     cout<<v[i]<<" ";
//     cout<<v.at(i)<<" ";     //either of these 2 can be used
// }
// cout<<endl;

// }
// int main(){
//     vector<int> vec1;
//     int element,size;
//     cout<<"enter the size of ur vector : "<<endl;
//     cin>>size;
//     for (int i = 0; i < size; i++)
//     {
//        cout<<"enter the element to add to this vector  ";
//        cin>>element;
//        vec1.push_back(element);       //push_back() function in C++ STL is used to add a new element to an existing list container.

//     }
//     //vec1.pop_back();                //pop_back() is used to remove/pop the element from the back or the last of the list container
//     display(vec1);
//     vector<int>:: iterator iter=vec1.begin();    //pointing iter with the 1 value of vector
//     vec1.insert(iter,45);            //inserts 45 before iterator
//     vec1.insert(iter+1,45);            //inserts 45 1 step after iterator
//     vec1.insert(iter+1,2,45);            //inserts 2 copies of 45 1 step after iterator
//     display(vec1);
//     return 0;
// }

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// ways to create a vector:

template <class T>
void display(vector<T> &v){
for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;

}
int main(){
    vector<int> vec1; // zero length integer vector
    vector<char> vec2(4); // four element character vector
    vec2.push_back('7');
    display(vec2);
    vector<char> vec3(vec2); //4 element character vector from vec2
    display(vec3);
    vector<int> vec4(6,4);    //6 element vector of 4s
    display(vec4);
    cout<<vec4.size();
cout<<endl;
    //concept from string
    string name="alisha";
    for (int i = 0; name[i]!='\0'; i++)      //'\0' means end of string
    {
        cout<<i+1<<" element of string "<<name<< " is "<< name[i]<<endl;
    }
    

return 0;
}