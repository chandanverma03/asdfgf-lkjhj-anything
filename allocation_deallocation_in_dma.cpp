#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
//	float *p = NULL;
//	float *r = NULL;
//	float *t = NULL;
//	float *si = NULL;
//	p = new float ;
//	r = new float ;
//	t = new float ;
//	si = new float ;
//	if(p == NULL||r==NULL||t==NULL||si==NULL){
//		cout<<"\nMemory allocation failure";
//		exit(1);
//	}
//	else
//	{
//		
//	}
	int *arr;
	int size;
	cout<<"\nEnter the size of integer array : ";
	cin>>size;
	cout<<"\nCreating an array of size : "<<size;
	arr = new int[size];
	if(arr = NULL)
	{
		cout<<"\nProblem in memory allocation";
		exit(1);
	}
	else
	{
		cout<<"\nDyanmic allocation of memory for array arr is successful.";
	}
	cout<<"\nEnter the array elements : ";
	for ( int i = 0; i <size; i++)
	{
		cin>>*(arr+i);
	}
	cout<<"\nEntered elements are : ";
	for (int i=0;i<size;i++)
	{
		cout<<"\n"<<*(arr+i);
	}
	}
	delete []arr;
	cout<<"\nMemory deallocated ";
	return 0;
}
