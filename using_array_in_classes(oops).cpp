#include<iostream>
using namespace std;

class shop
{
	int itemID[100];
	int itemprice[100];
	int counter; 
	public:
		void initcounter(void)
		{
			counter = 0;
		}
		void setprice(void);
		void displayprice(void);
};
void shop :: setprice(void)
{
	cout<<"\n\tEnter ID of your item "<<counter+1<<" : ";
	cin>>itemID[counter]; 
	cout<<"\tEnter price of your item : ";
	cin>>itemprice[counter];
	counter ++;
}
void shop :: displayprice(void)
{
	cout<<"\n\n";
	for(int i = 0; i < counter; i++)
	{
		cout<<"\tThe price of item with Id "<<itemID[i]<<" is "<<itemprice[i];
		cout<<endl;
	}
}
int main(){
	cout<<"\n\n\t\t\tWelcome to CPP Programming\n\n";
	shop dukan;
	dukan.initcounter();
	dukan.setprice();
	dukan.setprice();
	dukan.setprice();
	dukan.displayprice();
	return 0;
}
