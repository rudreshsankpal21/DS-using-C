#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 5 

int stack[MAX];
int top = -1;


void push(int val){
    if (top == MAX -1)
    {
        printf("\nCannot insert element.Stack is full\n");

    }else{
        top ++;
        stack[top] = val;
        printf("Element inserted successfully\n");
    }
}

void pop(){
    if (top == -1)
    {
        printf("Stack is empty\n");
    } else {
        printf("Element deleted successfully\n");
        top--;
    }   
}

void display(){
    if (top == -1)
    {
        printf("\nStack is empty\n");
    }
    printf("Elements of stack are :\n");
    for(int i = top; i >= 0; i--){
        printf("\n%d", stack[i]);
    }    
}


int main(){
    int choice,n;
    while (choice != 4)
    {
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("Enter youur choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1 : printf("Enter element to be inserted");
                    scanf("%d",&n);
                    push(n);
                    break;
            case 2 : pop();
                    break;
            case 3 : display();
                    break;
            case 4 : exit(0);
                    break;
            default : printf("Invalid choice\n");
                    break;
        }
    }
    return 0;    
}