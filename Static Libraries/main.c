#include "header.h"
void main(){
    int b,a,n1;
    printf("Enter SIZE");
    scanf("%d",&size);
    //extern size = n1;
    lable:
        printf("---MENU---\n1. Stack\n2.Queue\n3.Exit\n");
        scanf("%d",&a);
        switch(a){
            case 1: 
                choice(size);
                goto lable;
            case 2: 
                fund(size);
                goto lable;
            case 3:
                exit(0);
            default: printf("wrong selection--- \nTry again");
    }
}