#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void bubblesort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}

void main()
{
    int n;

    printf("Enter a size of array : ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("%d element : ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("before sorting\n");
    for (int i = 0; i < n; i++)
    {

        printf("%d ", a[i]);
    }

    bubblesort(a, n);

    printf("\nafter sorting\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}