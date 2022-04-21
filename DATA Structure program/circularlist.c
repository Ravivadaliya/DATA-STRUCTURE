// circularlink linklist
// insertion,
// deletion,
// display;
// count;

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *createnode(int x)
{
    struct node*ptr=malloc(sizeof(struct node));
    ptr->data=x;
    ptr->next=NULL;
    return ptr;
}
// insert af first position
struct node *insertfirst(struct node *head, int x)
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = x;

    struct node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
}



// insert at last position
struct node *insertatlast(struct node *head, int x)
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = x;

    struct node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;

    return head;
}



// insert at given indeex
struct node *insertatgivenindex(struct node *head, int x, int index)
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = x;

    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

//delete node at specific pocition

struct node *deleteatindex(struct node *head,int index)
{
    struct node *p=head;
    struct node *q=p->next;
    int i=0;
    while (i!=index-1)
    {
          p=p->next;
          q=q->next;
          i++;
    }
    p->next=q->next;
    free(q);
    return head;
}


struct node *displayallnode(struct node * head)
{
    struct node *display=head;
    do{
        printf(" %d",display->data);
        display=display->next;
        
    }while(display!= head);
    printf(" NULL\n");
}
int countnode(struct node*head)
{
    struct node*p=head;
    int count=0;
    do
    {
        p=p->next;
        count++;
    }while (p!=head);
    return count;
    
}


int main()
{
    
    struct node * head=NULL;
    int choice;
    
    while(1<2)
    {
    printf("Enter your choice :\n\n");
     printf("1.insert element first\n2.insert element last\n3.insert element givenindex\n4.delete node\n5.display all node\n6.count node\n");
    scanf("%d",&choice);
    int x,y;
    int poc;
     switch (choice)
     {
     case 1:
     printf("Enter a element you are insert");
     scanf("%d",&x);
     head = insertfirst(head,x);
     break;

     case 2:
     printf("Enter a element you are insert");
     scanf("%d",&x);
     head=insertatlast(head,x);
     break;

     case 3:
     printf("Enter a element you are insert");
     scanf("%d",&x);
     head=insertatgivenindex(head,x,y);
     break;

     case 4:
     head=deleteatindex(head,y);

     case 5:
     head=displayallnode(head);

     case 6:
     head=countnode(head);

     default:
         break;
     }

    }

}




