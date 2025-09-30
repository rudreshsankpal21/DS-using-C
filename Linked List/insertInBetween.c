#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node {
    int data;
    struct node *next;
};

struct node *tail,*newNode,*temp;

void insertInBetween(struct node *prevNode,int val){

    newNode = (struct node*)malloc(sizeof(struct node));

    if (prevNode == NULL)
    {
        printf("Previous node cannnot be NULL\n");
        return;
    }

    newNode -> data = val;
    newNode -> next = prevNode -> next;
    prevNode -> next = newNode;
}

void display(struct node *head){
    while (head != NULL)
    {
        printf("%d -> " , head -> data);
        head = head -> next;
    }
    printf("NULL\n");
}

int main(){
    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));
    struct node *third = (struct node*)malloc(sizeof(struct node));


    head -> data = 10;
    head -> next = second;

    second -> data = 20;
    second -> next = third;

    third -> data = 30;
    third -> next = NULL;

    printf("Before insertion\n");
    display(head);
    insertInBetween(second,50);
    printf("After insertion\n");
    display(head);

    return 0;
}