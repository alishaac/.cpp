// Bubble Sort is comparison based sorting algorithm. 
// In this algorithm adjacent elements are compared and swapped to make correct sequence. 
// This algorithm is simpler than other algorithms, but it has some drawbacks also. This algorithm is not suitable for large number of data set

//bubblesort using template
#include<iostream>
using namespace std;
template<class T>
void bubbleSort(T a[],int n){
    for(int i=0;i<n-1;i++)               // 1st loop is used to just move to next numbers
    for(int j=n-1;i<j;j--)               //2nd loop is used to compare 2 numbers
    if(a[j]<a[j-1])
    swap(a[j],a[j-1]);
}

int main(){
int a[5]={10,20,50,200};
int n=4;
double b[4]={10.2,40.4,70.2,10.5};
bubbleSort<int>(a,n);
bubbleSort<double>(b,n);
cout<<"sorted array 1:\n";
for (int i = 0; i < n; i++)
{
  cout<<a[i]<<" ";
  
}

cout<<"\nsorted array 2:\n";
    for (int i = 0; i < n; i++)
    {
        cout<< b[i]<<" ";
        
    }
    
    return 0;
}
