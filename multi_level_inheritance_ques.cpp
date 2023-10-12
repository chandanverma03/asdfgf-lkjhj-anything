#include<iostream>
using namespace std;
class X{
	public:
		int A(){
		int a = 10;
		cout<<"Value of a is : "<<a<<endl;
	}
};
class Y:public X{
	public:
		int B(){
		int b = 20;
		cout<<"Value of b is : "<<b;
	}
};
class Z:public Y{
	
};
int main(){
	Z obj;
	obj.A();
	obj.B();
	return 0;
}


