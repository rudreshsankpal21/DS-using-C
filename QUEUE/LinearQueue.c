#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAXSIZE 5

void insert();
void delete();
void display();

int queue[MAXSIZE];
int rear = -1 , front = -1;


void main(){
    int choice;
    while (choice != 4)
    {
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1 : insert();
                    break;
            case 2 : delete();
                    break;
            case 3 : display();
                    break;
            case 4 : exit(0);
                    break;
            default : printf("Invalid choice\n");
                    break;
        }
    }
}

void insert(){
    int item;
    printf("Enter the element\n");
    scanf("\n%d",&item);
    if(rear == MAXSIZE - 1){
        printf("Queue is full\n");
        return;
    } else if (front == -1 && rear == -1)
        {
            front = 0;
            rear = 0;
            queue[rear] = item;
    } else {
        rear += 1;
    }
    queue[rear] = item;
    printf("Element inserted successfully\n");
}

void delete(){
    int item;
    if (front == - 1 && rear == -1)
    {
        printf("Queue is empty\n");
    } else {
        item = queue[front];
        printf("Element deleted successfully\n");
        if (front == rear)
        {
            front = -1;
            rear = -1;
        } else {
            front += 1;
        }
        printf("Element deleted successfully\n");
    }
    
}

void display(){
    int i;
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    } 
        printf("Elements in queue are\n");
        for ( i = front; i <= rear; i++)
        {
            printf("%d\n",queue[i]);
        }        
}