#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 10

int queue[MAX];
int front = -1 , rear = -1;

void enqueue(int elem){
    if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        queue[rear] = elem;
    } else if ((rear + 1) % MAX == front)
    {
        printf("Queue is full\n");
        
    } else {
        rear = (rear + 1);
        queue[rear] = elem;
    }
    
}

void dequeue(){
    if((front == -1) && (rear == -1)){
        printf("Queue is empty\n");
    } else if (front == rear)
    {
        printf("Element deleted successfully\n");
        front = -1;
        rear = -1;        
    } else {
        printf("Element deleted successfully\n");
        front = (front + 1);
    }
}


void display(){
    int i;
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    } else {
        printf("Elements of queue are\n");
        for ( i = front; i <= rear; i++)
        {
            printf("%d\n",queue[i]);
        }        
    }
}

int main(){
    int choice,n;
    while (choice != 4)
    {
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element to be inserted\n");
            scanf("%d",&n);
            enqueue(n);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
 
    }
 return 0;  
}