/* C Program to find Sum of Even and Odd Numbers in an Array */
#include<stdio.h>
 
int main()
{
 int n, i, a[10];
 int Even_Sum = 0, Odd_Sum = 0;
 
 printf("\n Please Enter the Size of an Array : ");
 scanf("%d", &n);
 
 printf("\nPlease Enter the Array Elements\n");
 for(i = 0; i < n; i++)
 {
      scanf("%d", &a[i]);
 }

 for ( i = 0; i < n; i++)
 {
     if(a[i]%2==0)
     {
         Even_Sum= Even_Sum+ a[i];
     }
     else{
         Odd_Sum=Odd_Sum+a[i];
     }
 }
 printf("\nthe sum of all even array is : %d", Even_Sum);
 printf("\nthe sum of all even array is : %d", Odd_Sum);
 
}
 