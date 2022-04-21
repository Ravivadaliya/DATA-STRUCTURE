#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linklisttraversal(struct node *ptr)
{

    while (ptr != NULL)
    {
        printf("element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
//insert node first
struct node *insertatfirst(struct node *head, int x)
{

    struct node *ptr = malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = x;
    return ptr;
}
//insert node last
struct node *insertatend(struct node *head, int x)
{
    struct node *ptr = malloc(sizeof(struct node));
    struct node *p = head;
    ptr->data = x;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}


//insert node at any index
struct node *insertatindex(struct node *head, int x, int index)
{
    struct node *ptr = malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = x;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
//insert after node
struct node *insertafternode(struct node *head, struct node *prevnode, int x)
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = x;

    ptr->next = prevnode->next;
    prevnode->next = ptr;
    return head;
}

//delete node first
 struct node *deleteatfirst(struct node *head)
 {
    
    struct node *delete=head;
    head=head->next;
    free(delete);
    return head;
 }
//delete node last
  struct node *deleteatlast(struct node *head)
 {
     if (head==NULL)
     {
         return NULL;
     }
     
   struct node * p=head;
   struct node * q=p->next;
   while (q->next!=NULL)
   {
       p=p->next;
       q=q->next;
   }
   p->next=NULL;
   free(q);
   return head;
 }

//delete node any position of index
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

struct node *deisplayallnode(struct node * head)
{
    struct node *display=head;
    while(display!=NULL){
        printf(" %d",display->data);
        display=display->next;
        
    }
    printf(" NULL\n");
}
int countnode(struct node*head)
{
    struct node*p=head;
    int count=0;
    while (p!=NULL)
    {
        p=p->next;
        count++;
    }
    return count;
    
}
int main()
{
    int count=0;
    struct node *head = malloc(sizeof(struct node));
    struct node *second = malloc(sizeof(struct node));
    struct node *third = malloc(sizeof(struct node));
    struct node *fourth = malloc(sizeof(struct node));
    struct node *fifth = malloc(sizeof(struct node));

    head->data = 12;
    head->next = second;

    second->data = 45;
    second->next = third;

    third->data = 67;
    third->next = fourth;

    fourth->data = 78;
    fourth->next = fifth;

    fifth->data = 143;
    fifth->next = NULL;
    // printf(" %d", head->data);
    // printf(" %d", second->data);
    // printf(" %d", third->data);
    // printf(" %d", fourth->data);
    // head = deleteatfirst(head,);

    printf("before link list travarsal\n");
    linklisttraversal(head);
//    count=countnode(head);
//    printf("Total number of node is %d",count);
   printf("after link list traversal\n");
   head=insertatindex(head,55,2);
   linklisttraversal(head);

    return 0;
}
