#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x = 20;
    int *p = NULL;
    
    p=&x;
    x= *p+40;
 
    printf("x = %d\n", x);

    return (EXIT_SUCCESS);
}
