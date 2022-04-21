#include <stdio.h>
void main()
{
    int i, j, n, a[10];
    int temp;

    printf("enter a size of array: ");
    scanf("%d", &n);

    printf("Enter a element which you ar einsert :\n");
    for(i = 0; i < n; i++)
    {
      scanf("%d", &a[i]);
    }

     /*logic of shorting*/
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("the shorting array is: ");
    for (i = 0; i < n; i++)
    {
        printf(" %d", a[i]);
    }
}