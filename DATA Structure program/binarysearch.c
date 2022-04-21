#include<stdio.h>

int binarysearch(int a[],int x,int n)
{
    
    int left=0,right=n-1;
   
    while (left<right)
    {
        int mid = left + (right-left) / 2;
        if(a[mid]==x)
            return mid;
        else if(a[mid]>x)     
            right = mid-1;
        else                    
            left = mid+1;
    }   
    return -1;    
}



void main(){
    int n;

    //reading the number of elements of an array
    printf("\nEnter the number of elements of an array : ");
    scanf("%d", &n);

    //initializing array of size entered by user
    int arr[n];

    //reading the array
    printf("\nEnter the elements of an array: \n");
    for(int i = 0 ; i<n ; i++){
        printf("%d element : ", i+1);
        scanf("%d" , &arr[i]);
    }

    int x, index;
    printf("\nEnter the element to search : ");     //reading the element to be searched 
    scanf("%d", &x);

    index = binarysearch(arr, x, n); 

    if(index==-1){
        printf("\nElement is not present in an array\n\n");
        return;
    }
    printf("\n%d is present at index : %d\n", x, index);
}