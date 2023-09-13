#include<stdio.h>
int main(){
	int j,n;
	int a[j],i,temp=0,flag;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("Enter the elements : ");
	for(j=0;j<n;j++){
		scanf("%d",&a[j]);
	}
	for(i=0;i<n-1;i++){
		flag=0;
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
		break;
	}
	printf("Optimised bubble sort is : ");
	for(j=0;j<n;j++){
		printf("%d ",a[j]);
	}	
}
