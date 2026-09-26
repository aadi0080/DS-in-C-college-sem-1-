// sum of n natural number  

#include<stdio.h>
// int main(){
//     int n ;
//     printf("enter n :  "); 
//     scanf("%d" , &n);
//     int sum =0 ; 
//     int i=1; 
//     do{
       
//         sum=sum+i ;
//         i++;

//     }while(i<=n);


// printf("%d" , sum);

// }


// take numbers  form user  till the  number  is  odd  and  when you find odd print alert 
int main (){
    int n ; 
    // no need for initialization 
    do{
        printf("enter  the  no :  ");
        scanf("%d" , &n );
        printf("%d\n" , n);

        if(n%2!=0)
        {
            printf("alert: you enter  a  odd no   ");
            break;
        }
    }
     
    while(1);    // always true 

}



