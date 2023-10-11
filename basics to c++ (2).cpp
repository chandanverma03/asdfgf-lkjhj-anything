//#include<iostream>
//using namespace std;
//int main(){
//	int rollno;
//	char name, section;
//	cout<<"Enter your name : ";
//	cin>>name;
//	cout<<"Enter your roll :";
//	cin>>rollno;
//	cout<<"Enter you section :";
//	cin>>section;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main(){
//    int size,i;
//    int x, count =0;
//    int arr[size];
//    cin>>size;
//    for(i=0;i<size;i++){
//        cin>>arr[i];
//    }
//    for(i=0;i<size;i++){
//        for(int j=0;j<size;j++){
//            if(arr[j]==arr[i]){
//            count++;
//        }
//        x = arr[j]==arr[i];
//
//    }
//    }
//    if(count>=0){
//        cout<<"COmmna id is"<<x;
//    }
//    else{
//        cout<<"no";
//    }
//    return 0;
//    
//
//}

#include<iostream>
using namespace std;
int main(){
    int size, pos, value, i,j;
    int arr[size];
    cout<<"Enter the size of array : ";
    cin>>size;
    cout<<"Enter elements for array : ";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the position where you want to enter the element : ";
    cin>>pos;
    cout<<"Enter the element you want to enter : ";
    cin>>value;
    for(j=size-1;j=pos-1;j--){
        arr[j+1]=arr[j];
        arr[pos-1]=value;
    }
    cout<<"previous array : ";
    for(i=0;i<size;i++){
        cout<<" "<<arr[i];
    }
    cout<<"Updated array : ";
    for(j=0;j<size;j++){
        cout<<" "<<arr[j];
    }
    return 0;
}
