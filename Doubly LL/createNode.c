#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* prev;
    struct node* next;
};

struct node* createNode(int data){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

struct node* createList(int n){
    struct node* head = NULL;
    struct node* temp = NULL;
    struct node* newNode = NULL;
    int data;
    if (n <= 0)return NULL;

    printf("Enter data for node 1 : ");
    scanf("%d",&data);
    head = createNode(data);
    temp = head;
    for (int i = 2; i <= n; i++)
    {
        printf("Enter data for node %d : ",i);
        scanf("%d",&data);
        newNode = createNode(data);
        temp->next = newNode;
        newNode->prev = temp;
        temp = temp->next;
    }
    
    return head;   
}

void printList(struct node* head){
    struct node* temp = head;
    while (temp != NULL)
    {
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main(int argc, char const *argv[])
{
    struct node* head = NULL;
    head = createList(5);
    printList(head);
    return 0;
}