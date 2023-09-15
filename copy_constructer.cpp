#include<iostream>
using namespace std;
class student{
	string name;
	int rollno;
	public: 
		student(string n,int r){
			name = n;
			rollno = r;
		}
		student(string n,student &obj){
			name = n;
			rollno = obj.rollno;
		}
		void display(){
			cout<<"Name is : "<<name<<endl;
			cout<<"Roll no. is : "<<rollno<<endl;
		}
};
int main(){
	student chandan("Chandan",66);
	chandan.display();
	student saksham("Saksham",chandan);
	saksham.display();
	return 0;
}
