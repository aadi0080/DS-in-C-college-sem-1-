#include<stdio.h>
#include<math.h>
int main(){
    printf("enter  the  operation  ") ; 
    float  a;
    float  b;
    char  op ; 
    scanf("%f" , &a) ;
    scanf("%c" , &op);
    scanf("%f" , &b) ;
    if(op== '+'){
        printf("the sum is %f" , a+b);
    }
    else if(op== '-'){
        printf("the subtraction is %f" , a-b);
    }
    else if(op== '/'){
        printf("the division is %f" , a/b);
    }
    else if(op== '*'){
        printf("the product is %f" , a+b);
    }
    else{
        printf("invalid  operator");
    }
}