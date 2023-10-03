#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char ch[30];
	ofstream fileout;
	fstream file;
	fileout.open("Hello.txt",ios::out);
	fileout<<" Hello World ";
	fileout.close();
	file.open("Hello.txt",ios::in|ios::out);
	cout<<file.tellg();
	cout<<file.tellp();
	file.seekp(6);
	file.seekg(6);
	cout<<file.tellg();
	cout<<file.tellp();
	file>>ch;
	cout<<ch;
	return 0;
}
