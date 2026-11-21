#include <stdio.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int a;
    printf("enter  size  of  linked  list : ");
    scanf("%d", &a);
    struct node n[a];
    for (int i = 0; i < a; i++)
    {
        printf("enter element of node %d : ", i + 1);
        scanf("%d", &n[i].data);
    }
    // linking  address
    for (int i = 0; i < a; i++)
    {
        n[i].next = &n[i + 1];
    }
    struct node *head = &n[0];
    n[a - 1].next = &n[0]; // making it circular linked list
    struct node *temp = head;
    printf("\ndata\tnode address\tnext address\n");
    do{
        printf("%d\t%p\t%p\n", temp->data, temp, temp->next);
        temp = temp->next;
    }while(temp != head);

}