#include<stdio.h>
int main (){
    // every element should be different   
    int a , b, c ;
    printf("enter the a integer");
    scanf("%d" , &a);
    printf("enter the b  integer");
    scanf("%d" , &b);
    printf("enter the c integer");
    scanf("%d" , &c);
    if(a>b && a>c){
        if(b>c){
            printf("b is second greatest");
        }
        else{
            printf("c is greatest");
        }
    }
    else if(b>a && b>c){
        if(a>c){
            printf("a is second greatest");
        }
         else{
            printf("c is greatest");
        }
    }
    else if(c>a && c>b){
        if(a>b){
            printf("a is second greatest");
        }
         else{
            printf("b is greatest");
        }
    }

   
}