#include<stdio.h>
struct node{
    int data ;     // data 
    struct node *next ;    // address  of  next  data  
};

int  main(){
struct node  n[4] ; 
for(int  i = 0 ;  i < 4  ; i++){
    printf("enter  data  for  node %d " ,  i+1);
    scanf("%d", &n[i].data);
}
// linking  address 

for (int i = 0 ; i < 4  ; i++ ){
    n[i].next =&n[i+1] ; 
}
struct node *head = &n[0]; // head  store  address  of  1st  data
n[3].next = NULL;          // last  element  not  contain any next  address  that's  they  consist  next

// printing data  + address  
printf("\ndata\tnode adddress\tnext address\n");

while(head!=NULL){
    printf("%d\t%p\t%p\n" , head->data , head , head->next);
    head = head->next ; 
}

}

