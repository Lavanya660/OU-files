#include <stdio.h>
#include "myheader.h"

int main()
{
    int a = 10;
    int b = 20;

    swap(&a,&b);
    printf("%d = a, %d = b", a, b);
}