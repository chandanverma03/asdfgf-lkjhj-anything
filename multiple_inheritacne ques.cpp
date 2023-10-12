#include<iostream>
class A{
	public:
		int a;
		void getX(){
			std::cout<<"Enter the value of a : ";
			std::cin>>a;
		}
		void showX(){
			std::cout<<"The value of a is "<<a<<std::endl;
		}
};
class B{
	public:
		int b;
		void getY(){
			std::cout<<"Enter the value of b : ";
			std::cin>>b;
		}
		void showY(){
			std::cout<<"The value of b is "<<b<<std::endl;
		}
};
class C:private A, private B{
	public:
		int c;
		void getZ(){
			getX();
			getY();
			std::cout<<"Enter the value of c : ";
			std::cin>>c;		
		}
		void showZ(){
			showX();
			showY();
			std::cout<<"The value of c is "<<c;
		}
};
int main(){
	C obj;
	obj.getZ();
	obj.showZ();
	return 0;
}
