#include<iostream>
class student {
	protected:
		int roll_number;
		public:
		void get_number(int a){
			roll_number = a;
		}
		void put_number(){
			std::cout<<"Roll Number is "<<roll_number;
			std::cout<<"\n";
		}
};
class test: public student {
	protected:
		float mid_term, end_term;
		public:
			void get_marks(float x, float y){
				mid_term = x;
				end_term = y;
			}
			void put_marks(){
				std::cout<<"Mid Term marks : "<<mid_term<<std::endl;
				std::cout<<"End Term marks : "<<end_term<<std::endl;
			}
};
class sports{
	protected:
		float score;
		public:
			void get_score(float s){
				score = s;
			}
			void put_score(){
				std::cout<<"Score is "<<score<<std::endl;
			}
};
class result:public test, public sports{
	float total;
	public:
		void display();
		
		 
};
void result::display(){
	total = mid_term + end_term + score;
	put_number();
	put_marks();
	put_score();
	std::cout<<"Total score is "<<total<<std::endl;
}
int main(){
	result obj;
	obj.get_number(66);
	obj.get_marks(97.5,79.9);
	obj.get_score(79.5);
	obj.display();
	return 0;
}
