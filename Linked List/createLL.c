#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

 struct Node *newNode, *head,*tail,*temp;

void createLL(int val){
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
}


void display(){
    temp = head;
    while (temp != NULL)
    {
        printf("%d ->",temp -> data);
        temp = temp -> next;
    }
    printf("NULL");
}

int main(){
    int n,val;
    printf("Enter no. of nodes you want to enter : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter value : ");
        scanf("%d",&val);
        createLL(val);        
    }
    
    display();
    return 0;
}