#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX 10

int i,j;
struct priorityQueue
{
    int data;
    int priority;
};



struct priorityQueue pq[MAX];
int size = 0;


void insert(int val, int priority){
 if (size == MAX)
 {
    printf("Queue is full\n");
    return;
 }
 i = size;
 pq[i].data = val;
 pq[i].priority = priority;
 size++;
 
for ( j = i ; j> 0 && pq[i].priority > pq[j -  1].priority; j--)
{
    struct priorityQueue temp = pq[j];
    pq[j] = pq[j - 1];
    pq[j - 1] = temp;
}


}

void deleteHighestPriority(){
    if (size == 0)
    {
        printf("Delete item %d with priority %d\n", pq[0].data, pq[0].priority);
    }
        for(i = 0; i < size - 1; i++){
            pq[i] = pq[i + 1];
        }
        size--;
    
    
}

void display(){
    if (size == 0)
    {
        printf("Queue is empty\n");
    }

    printf("Elements of queue are\n");
    for ( i = 0; i < size; i++)
    {
        printf("Data %d with priority %d\n", pq[i].data, pq[i].priority);
    }
    
    
}


int main(){
    insert(10,2);
    insert(30,4);
    insert(50,1);
    insert(40,3);
    insert(20,5);
    display();
    deleteHighestPriority();
    display();
    return 0;
}