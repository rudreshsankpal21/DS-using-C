#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node{
int data;
struct node* next;
 struct node* prev; 
};

struct node* insertAtBeginning(struct node* head, int val){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));

    newNode -> data = val;
    newNode -> next = head;
    newNode -> prev = NULL;

    if (head != NULL)
    {
        head -> prev = newNode;
    }

    head = newNode;
    return head;
} 

void display(struct node* head){
    struct node* temp = head;
    while (temp != NULL)
    {
        printf("%d -> ",temp -> data);
        temp = temp -> next;
    }
    printf("NULL\n");
}

int main(){
    struct node* head = NULL;
    head = insertAtBeginning(head,10);
    head = insertAtBeginning(head,20);
    head = insertAtBeginning(head,30);
    display(head);
    return 0;
}