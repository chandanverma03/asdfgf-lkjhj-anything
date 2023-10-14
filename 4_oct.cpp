#include<iostream>
using namespace std;
class student {
	private: 
	int rollno;
	float fees;
	public:
		student(int a, float m){
			rollno = a;
			fees = m;
			
		}
		operator int(){
			return (rollno);
		}
		operator float(){
			return (fees);
		}
};
int main(){
	int i;
	float f;
	student st(5, 4200.50);
	i = st;
	f = st;
	cout<<"\nValue of j : "<<i<<"\n";
	cout<<"\nValue of f : "<<f<<"\n";
	return 0;
}
