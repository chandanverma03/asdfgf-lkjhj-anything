#include<iostream>
class A{
	private:
		int a;
		public:
			void getA(){
				std::cout<<"Enter the value of a : ";
				std::cin>>a;
			}
			void putA(){
				std::cout<<"The value of a is "<<a<<std::endl;
			}
};
class B:private A{
	private: 
		int b;
	public:
		void getB(){
			getA();
			std::cout<<"Enter the value of b : ";
			std::cin>>b;
		}
		void putB(){
			putA();
			std::cout<<"The value of b is "<<b<<std::endl;
		}
};
class C{
	private:
		int c;
		public:
			void getC(){
				std::cout<<"Enter the value of c : ";
				std::cin>>c;
			}
			void putC(){
				std::cout<<"The value of c is "<<c<<std::endl;
			}
};
class D: private C, private B{
	private:
		int d;
		public:
			void getD(){
				getB();
				getC();
				std::cout<<"Enter the value of d : ";
				std::cin>>d;
			}
			void putD(){
				putB();
				putC();
				std::cout<<"The value of d is "<<d<<std::endl;
			}
};
int main(){
	D obj;
	obj.getD();
	std::cout<"\n";
	obj.putD();
	return 0;
}
