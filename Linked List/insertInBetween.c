#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node {
int data;
struct node *next;
};

struct node *head,*tail,*temp,*newNode;

void insetInBetween(struct node *prevNode, int val){
    newNode = (struct node*)malloc(sizeof(struct node));
    if (prevNode == NULL)
    {
        printf("Previous node cannot be NULL\n");
    }
    
    newNode -> data = val;
    newNode -> next = prevNode -> next;
    prevNode -> next = newNode;
}

void display(){
    temp = head;
    while (temp != NULL)
    {
        printf("%d -> " , temp -> data);
        temp = temp -> next;
    }
    printf("NULL\n");
}


int main(){
    head = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));
    struct node *third = (struct node*)malloc(sizeof(struct node));
    

    head -> data = 10;
    head -> next = second;

    second -> data = 20;
    second -> next = third;

    third  -> data = 30;
    third -> next = NULL;

    printf("Original Linked List\n");
    display();
    insetInBetween(head, 15);
    printf("Linked List after insertion\n");
    display();
    return 0;
}