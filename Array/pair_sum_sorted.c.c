#include<stdio.h>
int main()
{
    int a[10]={1,3,4,5,6,8,9,10,12,14};
    int i=0;
    int j=9;
    while(i<j)
    {
        if(a[i]+a[j]==10)
        {
            printf("\n%4d %4d",a[i],a[j]);
            i++;
            j++;
             
        }
        else if(a[i]+a[j]<10)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
   
   
    
    return 0;
}