#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head,*tail,*temp,*newNode;

void createLL(int val){
    newNode = (struct node*)malloc(sizeof(struct node));

    newNode -> data = val;
    newNode -> next = NULL;

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;

    }
     else {
        tail -> next = newNode;
        tail = newNode;
     }
    
}

void display(){
    temp = head;
    while (temp != NULL)
    {
        printf(" %d ->",temp -> data);
        temp = temp -> next;
    }
    printf("NULL");
    
}

void main(){

    int n,val,i;
    printf("Enter the number of nodes : ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter the value of node %d : ",i+1);
        scanf("%d",&val);
        createLL(val);
    }
    display();

    
}