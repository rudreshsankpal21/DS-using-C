#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX 10

int rear = -1, front = - 1;
int queue[MAX];

void insert(){
    int item;
    printf("Enter the element to be inserted\n");
    scanf("%d",&item);
    if (rear == MAX - 1){
        printf("Queue is full\n");
        return;
    } else if (front == -1 && rear == -1){
        front = 0;
        rear = 0;    
    } else {
        rear ++;
    }
    queue[rear] = item;
    printf("Element inserted successfully\n");
}

void delete () 
{
    int item;
    if (front == -1 || front > rear)
    {
        printf("Queue is empty\n");
        return;
    } else {
        item = queue[front];

        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front ++;
        }
        printf("Element deleted successfully\n");
        
        
    }
    
}


void display(){


    int i;
    if(rear == -1) {
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
    int choice;
    while (choice != 4)
    {
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1: insert();
                    break;
            case 2: delete();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
                    break;
            default: printf("Invalid choice\n");
                    break;
        }
    }
    return 0;
}