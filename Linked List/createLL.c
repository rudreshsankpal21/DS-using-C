#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *new,*head,*tail,*temp;

void create(int val){
   struct node *newNode =  (struct node*)malloc(sizeof(struct node));
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
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL");
}


int main()
{
    int n,value;
    printf("Enter nodes you want to create");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value");
        scanf("%d",&value);
        create(value);
    }

    display();

    
    return 0;
}
