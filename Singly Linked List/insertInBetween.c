#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head,*tail,*temp,*newNode;

void insertInBetween(struct node *prevNode,int val){
    newNode = (struct node*)malloc(sizeof(struct node));

    if (prevNode == NULL)
    {
        printf("Previous node does not exist\n");
        return;
    }
    

    newNode -> data = val;
    newNode -> next = prevNode -> next;

    prevNode -> next = newNode;
}


void display(){
    temp = head;

    while (temp != NULL)
    {
        printf("%d -> ", temp -> data);
        temp = temp -> next;
    }
    printf("NULL\n");
}


int main(int argc, char const *argv[])
{
    head = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));
    struct node *third = (struct node*)malloc(sizeof(struct node));
    struct node *fourth = (struct node*)malloc(sizeof(struct node));

    head -> data = 10;
    head -> next = second;

    second -> data = 20;
    second -> next = third;

    third -> data = 30;
    third -> next = fourth;

    fourth -> data = 40;
    fourth -> next = NULL;


    printf("Original Linked List\n");
    display();
    insertInBetween(head,25);
    printf("\nLinked List after insertion in between\n");
    display();
    return 0;
}
