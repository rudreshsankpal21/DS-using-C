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
        printf("List is empty ");
    } 

    *head = (*head) -> next;
    free(temp);
}


void display(struct node *head){
    temp = head;

    while (temp != NULL)
    {
        printf("%d -> ", temp -> data);
        temp = temp -> next;
    }
    printf("NULL\n");
}

int main()
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
    display(head);
    deleteAtBeginning(&head);
    printf("\nLinked List after deletion at beginning\n");
    display(head);
    return 0;
}