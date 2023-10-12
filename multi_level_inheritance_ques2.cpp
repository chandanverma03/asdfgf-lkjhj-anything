#include<iostream>
using namespace std;
class X{
	private : 
		int a;
		public:
			void getX(){
				cout<<"Enter the value of a : ";
				cin>>a;
			}
			void showX(){
				cout<<"The value of a is "<<a<<endl;
			}
};
class Y: private X{
	private:
		int b;
	public:
		void getY(){
			getX();
			cout<<"Enter the value of b : ";
			cin>>b;
		}
		void showY(){
			showX();
			cout<<"The value of b is "<<b<<endl;
		}
};
class Z: private Y{
	private :
	int c;
	public:
		void getZ(){
			getY();
				cout<<"Enter the value of c : ";
				cin>>c;
			}
			void showZ(){
				showY();
				cout<<"The value of c is "<<c<<endl;
			}
		
};
int main(){
	Z obj;
	obj.getZ();
	obj.showZ();
	return 0;
}
