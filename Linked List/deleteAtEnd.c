#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node {
int data;
struct node *next;
};


struct node *createNode(int data){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode -> data = data;
    newNode -> next = NULL;
    return newNode;
}

struct node *deleteAtEnd(struct node *head){
if (head == NULL)
{
    printf("List is empty\n");
    return NULL;
} 
if(head -> next = NULL){
    free(head);
    return NULL;
}

struct node *second_last = head;
while (second_last -> next -> next != NULL)
{
    second_last = second_last -> next;
}

free(second_last -> next);
second_last -> next = NULL;

        
}

void printList(struct node *head){
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ",temp -> data);
        temp = temp -> next;
    }
    printf("NULL\n");
}

int main(){
    struct node *head = createNode(10);
    head -> next = createNode(20);
    head -> next -> next = createNode(30);
    printf("Original Linked List\n");
    printList(head);
    deleteAtEnd(head);
    printf("Linked List after deletion at end\n");
    printList(head);
    return 0;
}