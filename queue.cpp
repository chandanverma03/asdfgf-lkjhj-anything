/*
#include<iostream>
using namespace std;
#define MAX 15

void Qinsert(int);
void display();

int queue[MAX], front = -1, rare = -1;

void Qinsert(int value) {
    if(rare==MAX-1){
        cout<<"Queue overflow!!"<<endl;
        return;
    }
    if(front == -1 && rare == -1){
        front = rare = 0;
    }
    else{
        rare = rare + 1;
    }
    queue[rare] = value;
}

void display() {
    if (front == -1 && rare == -1) {
        cout<<"Queue is Empty"<<endl;
    }
    else {
        for (int i=front; i<=rare;i++) {
            cout<<queue[i]<<" ";
        }
        cout << endl;
    }
}

int main() {
    int n, value;
    cout<<"How many elements you want to enter: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter value "<<i+1<<" : ";
        cin>>value;
        Qinsert(value);
    }
    display();
    return 0;
}
*/




