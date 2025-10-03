#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node {
int data;
struct node* next;
};


struct node* createNode(int val){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode -> data = val;
    newNode -> next = NULL;
    return newNode;
}

struct node* deleteAtEnd(struct node* head){
if (head == NULL)
{
    printf("List is empty\n");
    return NULL;
} 
if(head-> next == NULL){
    free(head);
    return NULL;
}

struct node* second_last = head;
while (second_last -> next -> next != NULL)
{
    second_last = second_last -> next;
}

free(second_last -> next);
second_last -> next = NULL;

        
}

void printList(struct node *head){
    while (head != NULL)
    {
        printf("%d -> ",head -> data);
        head = head -> next;
    }
    printf("NULL\n");
}

int main(){
    struct node* head = createNode(1);
    head -> next = createNode(2);
    head -> next -> next = createNode(3);
    printf("Original Linked List\n");
    printList(head);
    deleteAtEnd(head);
    printf("Linked List after deletion at end\n");
    printList(head);
    return 0;
}