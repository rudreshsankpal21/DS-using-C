#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};


struct Node *head, *tail, *temp, *newNode;

void insert(int val){
    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode -> data = val;
    newNode -> next = NULL;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    } else {
        tail -> next = newNode;
        tail = newNode;
    }
    printf("Value inserted successfully\n");
}

void display(){
    temp = head;
    while (temp != NULL)
    {
        printf("%d -> ",temp -> data);
        temp = temp -> next;
    }
    printf("NULL");
    
}

int main(){
    int n,val;
    printf("Enter the number of nodes : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value : ");
        scanf("%d",&val);
        insert(val);
    }
    display(); 
    return 0;
}