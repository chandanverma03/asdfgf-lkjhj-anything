//Program to implement a stack using the array 
/*
#include<stdio.h>
#define size 5
int stack[size];
int top = -1;
void push(int x){
    if(top == size-1){
        printf("Stack overflow");
    }
    else{
        top = top+1;
        stack[top] = x;
    }
}
    void pop(){
        int y;
        if(top == -1){
            printf("Stack underflow");
        }
        else{
            y = stack[top];
            printf("%d",y);
            top = top -1;
        }
    }
int main(){
    int i;
    push(10);
    push(20);
    push(30);
    for(i=top;i>=0;i--){
        printf("\n");
        printf("%d",stack[i]);
    }
    printf("\nElement to be deleted : ");
    pop();
    return 0;
}    


*/




//Program to implement a stack using the array 
#include<stdio.h>
#define size 5
int stack[size];
int top = -1;
void push(int x){
    if(top == size-1){
        printf("Stack overflow");
    }
    else{
        top = top+1;
        stack[top] = x;
    }
}
    void pop(){
        int y;
        if(top == -1){
            printf("Stack underflow");
        }
        else{
            y = stack[top];
            printf("%d",y);
            top = top -1;
        }
    }
int main(){
    int i;
    push(10);
    push(20);
    push(30);
    for(i=0;i<=top;i++){
        printf("\n");
        printf("%d",stack[i]);
    }
    printf("\nElement to be deleted : ");
    pop();
    return 0;
}    
