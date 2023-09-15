#include<iostream>
using namespace std;
struct Node{
	int data ;
	Node* next;
};
Node* head = nullptr;
void display(Node* head){
	Node* current = head;
	while(current != nullptr){
		cout<<current->data<<" ";
		current = current->next;
	}
	cout<<endl;
	
}
void push(int val){
	Node* newNode = new Node;
	if(newNode == nullptr){
		cout<<"Cannot push the element.  "<<endl;
		
	}
	else{
	    newNode->data = val;
	    newNode->next = head;
	    head = newNode;
	    cout<<"Element pushed. "<<endl;
	}
}
void pop(){
    if(head == nullptr){
        cout<<"Stack is empty.."<<endl;
    }
    else{
        int item = head->data;
        Node* temp = head;
        head = head->next;
        delete temp;
        cout<<"Popped element : "<<item<<endl;
    }
}

int main(){
    push(30);
    push(23);
    push(79);
    push(5);
    cout<<"Stack is : ";
    display(head);
    pop();
    cout<<"Updated stack is : ";
    display(head);
    return 0;
}
