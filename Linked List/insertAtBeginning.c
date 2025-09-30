#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head ,*temp , *tail, *newNode;


void insertAtBeginning(struct node ** head , int val){
    newNode = (struct node*)malloc(sizeof(struct node));

    newNode -> data = val;
    newNode -> next = *head;

    *head = newNode;
}

void display(struct node *head){
    temp = head;
    while (temp != NULL)
    {
        printf("%d -> " , temp -> data);
        temp = temp -> next;
    }
    printf("NULL");
}

int main(){
    insertAtBeginning(&head,10);
    insertAtBeginning(&head,20);
    insertAtBeginning(&head,30);
    display(head);
    return 0;
}