#include<iostream>
using namespace std;
class abc{
	private:
		int a = 10;
	protected:
		int b = 20;
	public:
		int c = 30;
};
class xyz:public abc{
	public:
	void show(){
		cout<<b;
	}
};
int main(){
	xyz obj1;
	cout<<obj1.c;
	obj1.show();
	return 0;
}
