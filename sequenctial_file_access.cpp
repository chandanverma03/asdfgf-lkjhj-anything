#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char fname[20],ch;
	ifstream fin;
	
	cout<<"Enter the name of the file : ";
	cin.get(fname, 20);
	cin.get(ch);
	
	fin.open(fname, ios::in);
	if(!fin){
		cout<<"An error occurred in opening the file. \n";
		return 0;
	}
	while(fin){
		fin.get(ch);
		cout<<ch;
		
	}
	return 0;
}
