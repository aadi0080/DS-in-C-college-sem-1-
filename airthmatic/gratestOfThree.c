#include<stdio.h>
int main(){
    int a , b, c ;
    printf("enter the a integer");
    scanf("%d" , &a);
    printf("enter the b  integer");
    scanf("%d" , &b);
    printf("enter the c integer");
    scanf("%d" , &c);
    if(a>b && a>c){
        printf("a is greatest");
    }
    else if(b>c ){
        printf("b is greatest");
    }
   else{
        printf("c is greatest");
    }
}