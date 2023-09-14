/*#include<iostream>
using namespace std;
class student{
	int roll;
	public:
		student(int);
		void display();
		
};
student::student(int a){
	cout<<"Constructer is called : ";
		roll = a;
}
void student::display(){
	cout<<roll<<"\n";
}
int main(){
	student chandan(5);
	chandan.display();
	student saksham(3);
	saksham.display();
	return 0;
}
*/

//write a program to print fabnocaii series using constructer

/*
#include<iostream>
using namespace std;
class fabnocaii{
	int f1,f2,fib;
	public:
		fabnocaii(){
			f1 = 0;
			f2 = 1;
			cout<<f1<<" ";
			cout<<f2<<" ";
			fib = f1+f2;
		}
		void fibincrement(){
			f1 = f2;
			f2 = fib;
			fib = f1+f2;
		}
		void display(){
			cout<<fib<<" ";
			
		}
		
};
int main(){
	int n;
	cout<<"How many term do you want to print : ";
	cin>>n;
	fabnocaii f;
	for(int i =2;i<n;i++){
		f.display();
		f.fibincrement();
	}
}
*/

#include<iostream>
using namespace std;
class student{
	public: 
	int roll;
	student (int a){
		roll = a;
	}
	student(student &obj){
		roll = obj.roll;
	}
	
};
int main(){
	student chandan(15);
	student saksham(15);
	cout<<"Roll number of Chandan : "<<chandan.roll<<endl;
	cout<<"Copied roll number of Chandan to Saksham : "<<saksham.roll<<endl;
	return 0;
	
}

