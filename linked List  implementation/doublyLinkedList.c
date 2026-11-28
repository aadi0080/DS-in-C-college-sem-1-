#include<stdio.h>
struct node
{
    int  data  ; 
    struct node *next ; 
    struct node *prev; 

} ;

int  main()
{
    int  n ; 
    printf("enter  the  size  of  linkedlist: ") ; 
    scanf("%d" , &n);
struct node  N[n]; 

// inputing  data  for  each  node  
for(int  i = 0 ; i < n ; i++)
{
    printf("enter data  of %d node " , i+1 );
    scanf("%d" , &N[i].data) ;

}

// linking  address  
for(int  i = 0 ; i < n ; i++ )
{
    N[i].next = &N[i+1] ; 
    N[i].prev = &N[i-1] ; 
}
struct node  *head  = &N[0] ; 
N[0].prev = NULL ; 
N[n-1].next = NULL ; 
struct node *temp = head  ; 
printf("prev address \t data  \t  next address \t node  address \n") ; 


// printing  
while(temp != NULL)
{
    printf("%p\t%d\t%p\t%p\n" , temp->prev , temp-> data  , temp->next , temp);
    temp = temp-> next ; 
}
}