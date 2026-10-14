#include<stdio.h>

// theree  is   no  string   in  c languagge  so we  use  char arr[size]
// and  at   time  of  printing  or inputing  use  strcpy for  type  casting  into string  
// using  string.h heaeer   file  
#include<string.h>
int main(){
    printf("enter  your  name ");
    char name[20]; 
   scanf("%s" , name); 
   printf("%s", name);
   
}