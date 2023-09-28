/*
ios :: app                             append to end-of-file
ios :: ate                             Go to end of file on opening 
ios :: binary                          Binary file 
ios :: in                              Open file for reading only 
ios :: nocreate                        Open file if file does not exist 
ios :: noreplace                       Open fail if file already exist 
ios :: out                             Open file for writing only
ios :: trunc                           Delete contents of file
*/

#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char ch[30];
	ofstream fileout;
	ifstream filein;
	fileout.open("user.txt",ios::app);
	fileout<<" Hello World ";
	fileout.close();
	
	filein.open("user.txt",ios::in);
	filein.getline(ch,30);
	cout<<ch;
	return 0;
}
