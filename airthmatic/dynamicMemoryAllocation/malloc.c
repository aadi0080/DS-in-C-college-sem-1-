#include<stdio.h>
#include<stdlib.h>
int main(){
    // malloc  
    int n ;
    printf("enter  the  size  you want  to alllocate ");
    scanf("%d" , &n);

    int *p = malloc(n*sizeof(int));

 // allocated  memory  contain garbage value  in malloc  
// checking  memory  is  allocated  or  not 
if(p== NULL){
    printf("memory allocaation is  failed");
}

for(int i =0 ; i<n ; i++){
    printf("%d  ", p[i]=(i+1));
}
free(p);

}