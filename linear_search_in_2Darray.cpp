#include <iostream>
using namespace std;
bool ispresent(int arr[][4],int row,int col,int target )            
{
    for(int i = 0;i<row;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[3][4];
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cin>>arr[row][col];
        }
    }
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<4;col++){
            cout<<arr[row][col]<<" ";
        }
		cout<<endl;
    }
    cout<<"Enter number you want to if present or not :  ";
    int key;
    cin>>key;
    if(ispresent(arr,3,4,key))
    {
        cout<<"The number is present ";
    }
    else{
        cout<<"The number is not present ";
    }
    return 0;

}
