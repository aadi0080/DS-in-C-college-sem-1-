// int i = 0; // initialize
//    whlie(condition)   {
//      do
//      increment
//    }


// print multiple of n take from 1 to 10 .  n take as  input  from  user
#include <stdio.h>
int main()
{
    int n;
    printf("enter the  no. :  ");
    scanf("%d", &n);
    int i = 1;
    while(i <= 10)
    {
        printf("%d\n", i*n);
        i++;
    }
}
