#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node {
int data;
struct node *next;
};

struct node *head,*tail,*temp,*newNode;

void deleteAtBeginning(struct node **head){
    temp = *head;

    if (*head == NULL)
    {
        printf("List is empty\n");
    }
    
    *head = (*head) -> next;
    free(temp);
}


void printLL(struct node *head){
    while ( head != NULL){
        printf("%d -> ",head -> data);
        head = head -> next;
    }
    printf("NULL\n");
}


int main(int argc, char const *argv[])
{
    head = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));
    struct node *third = (struct node*)malloc(sizeof(struct node));

    head -> data = 10;
    head -> next = second;
    second -> data = 20;
    second -> next = third;
    third -> data = 30;
    third -> next = NULL;

    printf("Before Deleting : ");
    printLL(head);
    deleteAtBeginning(&head);
    printf("After Deleting : ");
    printLL(head);
    return 0;
}
