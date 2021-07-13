//operator overloading

	//UNARY
	#include<iostream>
	using namespace std;
	class Weight{
	private:
		int kg;
	public:
		Weight(){
			kg=0;
		}
		Weight(int x){
			kg=x;
		}
		void print_weight(){
			cout<<"Weight in kg:"<<kg<<endl;
		}		
		void operator ++(){      //preincrement
			++kg;
		}
			void operator ++(int){      //postincrement (add int in btwn)
			kg++;
		}
		void operator --(){      //predecrement
			--kg;
		}
			void operator --(int){      //postdecrement (add int in btwn)
			kg--;
		}	
	};
	int main(){
		Weight obj;
		obj.print_weight();
		++obj;
		obj.print_weight();
		obj++;
		obj.print_weight();
		
		
		--obj;
		obj.print_weight();
		obj--;
		obj.print_weight();
		return 0;
	}
	
//BINARY
#include<iostream>
using namespace std;
class Complex{
	private:
		int real,img;
		public:
			Complex(){
				real=0;
				img=0;
			}
			Complex(int r,int i){
				real =r;
				img=i;
			}
			void print(){
				cout<<real<<"+"<<img<<"i"<<endl;
			}
			//operator overloading
			Complex operator +(Complex c){
				Complex temp;
				temp.real=real+c.real;
				temp.img=img+c.img;
				return temp;
			}
};
int main(){
	Complex c1(2,5);
	Complex c2(3,4);
	Complex c3;
	c3=c1+c2; //c3=c1.add(c2);
	c3.print();
		return 0;
	}
	
	