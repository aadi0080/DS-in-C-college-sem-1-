#include<stdio.h>
#include<stdlib.h>
int main(){
    // malloc  
    
    

    int *p = malloc(5*sizeof(int));

 // allocated  memory  contain garbage value  in malloc  
// checking  memory  is  allocated  or  not 
if(p== NULL){
    printf("memory allocaation is  failed");
}

for(int i =0 ; i<5 ; i++){
     p[i]=(i+1);
}


// now  i need  5 more  memory  of  int 
int *temp = realloc(p , 10*sizeof(int));
p= temp ;
for(int i= 5 ; i<10 ; i++){
    p[i] = (i+1); 
}
for(int i=0 ; i<10 ; i++){
    printf("%d " ,  p[i]);
}


}