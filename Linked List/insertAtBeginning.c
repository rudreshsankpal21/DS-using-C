#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head,*tail,*temp,*newNode;
void insertAtBeginning(struct node **head,int val){
    newNode = (struct node*)malloc(sizeof(struct node));

    newNode -> data = val;
    newNode -> next = *head;

    *head = newNode;
}


void printList(){
    temp = head;
    while (head != NULL)
    {
        printf(" %d ->",temp -> data);
        temp = temp -> next;
    }
}


int main(){

    insertAtBeginning(&head,10);
    insertAtBeginning(&head,20);
    insertAtBeginning(&head,30);
    insertAtBeginning(&head,100);
    insertAtBeginning(&head,5);

    printList();
    return 0;
}