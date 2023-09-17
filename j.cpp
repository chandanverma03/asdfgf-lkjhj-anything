#include<iostream>
using namespace std;
int* fun(){
	int x = 2;
	return (&x);
}
int main(){
	int *p;
	p = fun();
	cout<<*p;
	return 0;		
}
