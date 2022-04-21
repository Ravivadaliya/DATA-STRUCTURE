#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

/*void linklisttraversal(struct node *ptr)
{
    while (ptr !=NULL)
    {
        printf("%d", ptr->data);
        ptr = ptr->next;
    }
}*/

/* struct node *head;
 struct node *second;
 struct node *third;
 struct node *fourth;

 head = (struct node *)malloc(sizeof(struct node));
 second = (struct node *)malloc(sizeof(struct node));
 third = (struct node *)malloc(sizeof(struct node));
 fourth = (struct node *)malloc(sizeof(struct node));
*/
int countnode(struct node *head)
{
    struct node *p = head;
    int count = 0;
    while (p != NULL)
    {
        p = p->next;
        count++;
    }
    return count;
}
int main()
{
    int count = 0;
    struct node *head = malloc(sizeof(struct node));
    struct node *second = malloc(sizeof(struct node));
    struct node *third = malloc(sizeof(struct node));
    struct node *fourth = malloc(sizeof(struct node));

    head->data = 12;
    head->next = second;

    second->data = 45;
    second->next = third;

    third->data = 67;
    third->next = fourth;

    fourth->data = 78;
    fourth->next = NULL;

    printf(" %d", head->data);
    printf(" %d", second->data);
    printf(" %d", third->data);
    printf(" %d", fourth->data);

    /*third = malloc(sizeof(struct node));
    third->data = 69;
    third->next = NULL;
    head->next->next = third;
*/
    count = countnode(head);
    printf("\nThe total nodes are= %d", count);
    return 0;
}
