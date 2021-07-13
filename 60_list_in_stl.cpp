#include<iostream>
#include<list>
using namespace std;
void display(list<int> &lst){
    list<int>::iterator it;
    for (it=lst.begin();it!=lst.end();it++)
    {
       cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
    list<int> list1 ; //list of 0 length
    list1.push_back(2);
    list1.push_back(4);
    list1.push_back(5);
    list1.push_back(15);
    list1.push_back(21);
    list1.sort();        // TO SORT THE LIST
    display(list1);
/*
    // REMOVING ELEMENTS FROM THE LIST
    list1.pop_back(); //to delete one last element from list... more times we write pop_back,that no of times it deleted the element from back
    display(list1);
    list1.pop_front(); //to delete one front element from list... more times we write pop_front,that no of times it deleted the element from front/start
    display(list1);
    list1.remove(15); // to remove any element from between
    display(list1);
*/

    // another list can also be made like this without using list with iterator (in the void display func here for list 1)

  list<int> list2(3) ; //list of size 3
  list<int>::iterator iter; 
  iter=list2.begin();
  *iter=45;
  iter++;
  *iter=65;
  iter++;
  *iter=34;
  iter++;
  list2.sort();
  display(list2);

  //REVERSING THE LIST
  list2.reverse();
  cout<<"reversed list 2 is : ";
  display(list2);


  //MERGING THE ELEMENTS OF THE LIST
  list1.merge(list2);
  cout<<"list 1 after merging : "<<endl;
  display(list1);


    return 0;
}