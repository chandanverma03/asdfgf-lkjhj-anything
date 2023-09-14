//UNION

//Union is similar as structure. The major distinction b\w them is in terms of storage.
//In structure each member has its own storage location whereas all the members of union uses the same location
//the union may contain many members of different data type but it can handle only one member ata time union can be
//declared using the keyword union.


//Union declaration 
//union item{
//	int m;
//	float x;
//	char c;
//}code;

#include<iostream>
using namespace std;
union student {
	char name;
	int roll;
	
}u;
int main(){
	u.name='n';
	cout<<"Name is  "<<u.name<<endl;
	u.roll=1;
	cout<<"roll is "<<u.roll<<endl;
	return 0;
}
