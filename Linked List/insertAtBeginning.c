#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *temp,*head,*tail,*newNode;

void insertAtBeginning(struct node ** head, int val){
    newNode = (struct node*)malloc(sizeof(struct node));

    newNode -> data = val;
    newNode -> next = *head;
    *head = newNode;
}

void display(){
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
    insertAtBeginning(&head,10);
    insertAtBeginning(&head,30);
    insertAtBeginning(&head,20);
    insertAtBeginning(&head,90);
    insertAtBeginning(&head,50);
    display();
    return 0;
}
