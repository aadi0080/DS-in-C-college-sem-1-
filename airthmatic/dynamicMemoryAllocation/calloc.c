#include<stdio.h>
#include<stdlib.h>
int  main (){
    int n ;
    printf("enter  the  size  you want  to alllocate ");
    scanf("%d" , &n);
    int *p = calloc(n , sizeof(int)); 
    if(p == NULL){
        printf("memory  allocation is failed");
    }
    for (int i = 0 ; i<n ; i++){
        printf("%d " , p[i]);
    }

    
}