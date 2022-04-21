#include<stdio.h>
#define n 100
int f=-1,r=-1,i;
int q[n];

void insert(int x){

    //check for overflow
    if(r>=n-1){
        printf("\nQueue Overflow\n");
        return;
    }
    r++;
    q[r] = x;
    if(f==-1)
    {
        f=0;
    }
  
}

int delete(){

    //check for underflow
    if(f==-1){
        printf("Queue Underflow");
        return -1;
    }
    int y = q[f];

    if(f==r)    
        f = r = -1;
    else
        f++;

    return y;
}

//this function print queue
void display(){
    for(int i = f ; i<=r ; i++){
        printf("%d ", q[i]);
    }
}

void main()
{
     int choice;
     int x;
     while (1)
     {

     printf("enter your choice\n");
     printf("press 1 for insert\npress 2 for delete\npress 3 for display\n");
     scanf("%d",&choice);
   
     
     switch (choice)
     {
     case 1:
         
         printf("ENTER A NUMBER WHICH YOU ARE INSERT :");
         scanf("%d",&x);
         insert(x);
         break;
     
     case 2:
      delete();
       
    case 3:
      display();
     default:
         break;
     }
     }
}
