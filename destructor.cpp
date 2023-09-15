#include<iostream>
using namespace std;
class counter{
	int id;
	public:
		counter(int a){
			id = a;
			cout<<"Counter of ID no. = "<<endl;
			
		}
		~counter(){
			cout<<"Destructer is called id = "<<id<<endl;
		}
};
int main(){
	counter c1(1);
	counter c2(2);
	counter c3(3);
	cout<<"End of main function "<<endl;
	return 0;
}

