#include<stdio.h>

int main()
{
    int *p;
    int a=10;
    
    p=&a;
    
    printf("%d",p);
    printf("\n%d",*p);
 return 0;   
}