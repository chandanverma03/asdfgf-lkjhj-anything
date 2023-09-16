
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream writeinfo;
	writeinfo.open("chandan.txt");
	writeinfo<<("chandan verma");
	writeinfo.close();
	return 0;
	
}
