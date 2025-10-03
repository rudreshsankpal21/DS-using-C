#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node {
int data;
struct node* prev;
struct node* next;
};

struct node* insertAtBeginning(struct node* head,int val){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));

    newNode -> data = val;
    newNode -> prev = NULL;
    newNode->next = head;
    if (head != NULL)
    {
        head ->prev = newNode;
    }

    head = newNode;
    return head;
}


void display(struct node* head){
    while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
    
}

int main(int argc, char const *argv[])
{
    struct node* head = NULL;
    head = insertAtBeginning(head,20);
    head = insertAtBeginning(head,10);
    head = insertAtBeginning(head,40);
    head = insertAtBeginning(head,30);
    display(head);
    return 0;
}
