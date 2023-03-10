#include<stdio.h>
#include<stdlib.h>
//int size;
int size,s[],i,top=-1,b;  
void push (int n)  
{  
    int val;    
    printf("%d",n);  
    //s[n];
    if (top == (n-1))   
        printf("\n Overflow");
    else   
    {  
        printf("Enter the value?");  
        scanf("%d",&val);         
        top = top +1;   
        s[top] = val;   
    }   
}    
void pop ()   
{   
    if(top == -1)   
        printf("Underflow");  
    else  
        top = top -1;   
}   
void show()  
{  
    for (i=top;i>=0;i--)  
    {  
        printf("%d\n",s[i]);  
    }  
    if(top == -1)   
    {  
        printf("Stack is empty");  
    }  
}  
int choice(int x){
    while(1){
        printf("---MENU---\n1. Instert\n2. Delete\n3. Display\n4. Exit\n");
        scanf("%d",&b);
        switch(b){
            case 1: 
                push(x);
                break;
            case 2:
                pop();
                break;
            case 3:
                show();
                break;
            case 4:
                return 0;
            default: printf("wrong selection try again");
        }
    }
}