// Implement circular queue using array that performs following operations : INSERT, DELETE, DISPLAY

#include <stdio.h>
#define N 5

//Queue is represented by q[N] of size N
int q[N];

//initializing front & rear pointer of queue
int f = -1, r = -1;

//queue manipulation functions
void insert(int);
int delete();
void display();


//this function insert an element at the rear(end) of the queue
void insert(int x){
    
    // reset rear pointer
    if(r==N-1)    
        r=0;
    else
        r++;
    
    // check overflow
    if(f==r){   
        printf("\nQueue Overflow\n");
        return;
    }

    // insert element
    q[r] = x;   

    // is front pointer properly set
    if(f==-1)   
        f=0;
}

//this function delete an element from the front of the queue
int delete(){
    
    //check for underflow
    if(f==-1){       
        printf("\nQueue Underflow\n");
        return -1;
    }
    int y = q[f];
    q[f] = -1;
    if(f==r){
        f = r = -1;
        return y;
    }

    //reset front pointer
    if(f==N-1)        
        f = 0;
    else 
        f++;
    return y;
}

//this function print queue
void display(){
    if(f<=r){
        for(int i = f ; i<=r ; i++){
            printf("%d ", q[i]);
        }
    } else {
        for(int i = f ; i<N ; i++)
            printf("%d ", q[i]);
        for(int i = 0 ; i<=r ; i++)
            printf("%d ", q[i]);
    }
}

//driven code
void main(){
    int choice;
    int x;
    
    while (1){
    
    printf("enter your choice\n");
    printf("1.insert element\n2.delete element\n3.desplay all element\n");
    scanf("%d",choice);

    switch (choice)
    {
    case 1:
    printf("enter element you are insert: ");
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