#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *temp,*tail,*newNode;

void insertInBetween(int val, struct node ** prevNode){
    newNode = (struct node*)malloc(sizeof(struct node));
    if(prevNode == NULL){
        printf("previous node cannot be NULL \n");
        return;
    }

    newNode -> data = val;
    newNode -> next = (*prevNode) -> next;
    (*prevNode) -> next = newNode;
}

void printList(struct node *head){
    temp = head;
    while (temp != NULL)
    {
        printf("%d -> " , temp -> data);
        temp = temp -> next;
    }
    printf("NULL");
}

int main(int argc, char const *argv[])
{
    
    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));
    struct node *third = (struct node*)malloc(sizeof(struct node));

    head -> data = 10;
    head -> next = second;

    second -> data = 20;
    second -> next = third;

    third -> data = 30;
    third -> next = NULL;

    printf("Linked list before insertion\n");
    printList(head);
    insertInBetween(100, &head);
    printf("\nLinked list after insertion\n");
    printList(head);
    return 0;
}
