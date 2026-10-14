#include<stdio.h>
#include<string.h>
struct student{
    char name[20];
    float percentage ;
    char email[50];

};
int  main(){
    struct student s1 ; 
    strcpy(s1.name , "aadarsh jaiswal");
    s1.percentage=81.5 ;
    strcpy(s1.email, "aadarshjaiswal9696@gmail.com");
    printf("name is %s\n" , s1.name );
     printf("percentage is %f\n" , s1.percentage);
     printf("email is %s" , s1.email);
    
}
