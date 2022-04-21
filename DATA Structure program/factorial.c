#include<stdio.h>

int main()
{
    int factorial=0;
    int i,n;
    printf("enter a number find factorial :");
    scanf("%d",&n);

    for ( i = 1; i <=n; i++)
    {
        factorial=factorial*i;
   
    }
    
    printf(" the given number factorial are  :",factorial);
}