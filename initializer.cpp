#include<iostream>
using namespace std;
class rectangle{
	int length,breadth;
	public:
		rectangle(int len, int b):length(len),breadth(b){}
			void display(){
				cout<<"Area of rectangle is : "<<length*breadth<<endl;
		}
		
};
int main(){
	rectangle rec(6,5);
	rec.display();
	return 0;
}


