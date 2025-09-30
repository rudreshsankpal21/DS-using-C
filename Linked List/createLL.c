#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node *head,*tail,*temp,*newNode;

void insert(int val){
    newNode = (struct node*)malloc(sizeof(struct node));

    newNode -> data = val;
    newNode -> next = NULL;

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
     else {
        tail -> next = newNode;
        tail = newNode;
     }
     printf("Value inserted\n");
}

void display(){
    temp = head;
    while(temp != NULL)

    {
        printf("%d -> ", temp -> data);
        temp = temp -> next;
    }
    printf("NULL");
}

int main(){
    int n,val;
    printf("Enter no. of nodes want to enter : ");
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        printf("Enter value to be inserted : ");
        scanf("%d",&val);
        insert(val);
    }
    display();
    return 0;
}