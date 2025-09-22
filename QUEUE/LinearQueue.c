// Linear Queue using array
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAXsize 5
void insert();
void delete();
void display();
int front = -1 , rear = -1;
int queue[MAXsize];

void main(){
    int choice;
    while (choice !=  4){
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
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
    
}


void insert(){
    int item;
    printf("Enter the element to be inserted\n");
    scanf("%d",&item);
    if (rear == MAXsize - 1)
    {
        printf("Queue is full\n");
        return;
    }
    if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
    }else {
        rear ++;
    }
    queue[rear] = item;
    printf("Value inserted\n");   
}

void delete(){
    int item;
    if (front == -1 || front > rear)
    {
        printf("\nQueue is empty");
    } else {
        item =  queue[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        } else {
            front ++;
        }
        printf("\nValue deleted successfully\n");
        
    }
    
}

void  display(){
    int i;
    if (rear == -1)
    {
        printf("\nQueue is empty");
    } else {
        printf("\nElements of queue are\n");
        for ( i = front; i <= rear; i++)
        {
            printf("\n%d",queue[i]);
        }
    }
    
}