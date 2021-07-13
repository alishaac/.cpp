#include<iostream>
using namespace std;
// this is without the use of templates
/*
class vector{
    public:
    int *arr;
    int size;
    
    vector(int m){
        size=m;
        arr=new int[size];
    }
    int dotPro(vector &v){
int d=0;
for (int i = 0; i < size; i++)
{
    d+=this->arr[i]*v.arr[i];

    }
    return d;
    }
};

int main(){
    vector v1(3);
    v1.arr[0]=4;
    v1.arr[1]=3;
    v1.arr[2]=1;
     vector v2(3);
    v2.arr[0]=1;
    v2.arr[1]=0;
    v2.arr[2]=1;
    int a=v1.dotPro(v2);
    cout<<a<<endl;
    return 0;
}
*/



// when we use template
template<class T>
class vector{
    public:
    T *arr;
    int size;
    
    vector(int m){
        size=m;
        arr=new T[size];
    }
    T dotPro(vector &v){
 T d=0;
for (int i = 0; i < size; i++)
{
    d+=this->arr[i]*v.arr[i];

    }
    return d;
    }
};

int main(){
    vector<float> v1(3);
    v1.arr[0]=4;
    v1.arr[1]=3;
    v1.arr[2]=1;
     vector <float>v2(3);
    v2.arr[0]=1.1;
    v2.arr[1]=0.2;
    v2.arr[2]=1.3;
    float a=v1.dotPro(v2);
    cout<<a<<endl;
    return 0;
}