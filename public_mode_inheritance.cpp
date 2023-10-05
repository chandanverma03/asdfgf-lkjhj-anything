#include<iostream>
#include<string.h>
using namespace std;
class student{
	private:
		int roll_no;
	protected:
		char section[10];
	public:
		void get_rno(){
			cout<<"\nEnter the roll number : ";
			cin>>roll_no;
		}
		void show_rno(){
			cout<<"\nRoll no : "<<roll_no;
		}
};
class result: public student{
	private:
		float fees;
		public:
			void get_data(){
				get_rno();
				cout<<"\nEnter fees : ";
				cin>>fees;
				cout<<"\nEnter Section : ";
				cin>>section;
			}
			void display(){
				show_rno();
				cout<<"\nFees : "<<fees;
				cout<<"\nSection : "<<section;
			}
};
int main(){
	result obj1;
	obj1.get_data();
	obj1.display();
	return 0;
}
