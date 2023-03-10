#include<stdio.h>
#include<stdlib.h>

void fun(int );
void enQueue(int);
void deQueue();
void display();

int  y,queue[],front = -1, rear = -1;

void enQueue(int x){
    printf("%d\n",x);
    if (rear == x-1)
        printf("\nQueue is Full!!! Insertion is not possible!!!");
    else{
        printf("Enter the value to be insert: ");
		scanf("%d",&y);
        if(front == -1)
            front = 0;
        rear++;
        queue[rear] = y;
        printf("\nInsertion success!!!");
   }
}
void deQueue(){
    if(front == rear)
        printf("\nQueue is Empty!!! Deletion is not possible!!!");
    else{
        printf("\nDeleted : %d", queue[front]);
        front++;
        if(front == rear)
        front = rear = -1;
    }
}
void display(){
    if(rear == -1)
        printf("\nQueue is Empty!!!");
    else{
        int i;
        printf("\nQueue elements are:\n");
        for(i=front; i<=rear; i++)
        printf("%d\t",queue[i]);
    }
}
int fund(int Size)
{
    int value, choice;
    while(1){
        printf("\n\n***** MENU *****\n");
        printf("1. Insertion\n2. Deletion\n3. Display\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
	        case 1: 
		        enQueue(Size);
		        break;
	        case 2: deQueue();
		        break;
	        case 3: display();
		        break;
	        case 4: 
                return 0;
	        default: printf("\nWrong selection!!! Try again!!!");
        }
   }
}