#include<stdio.h>
#include<stdlib.h>


int main()
{
    int x = 5;
    int y = -4;
    int *p = &x; 
    int *q = &y;
    int *r = p;
    
    int temp;
    temp = *p;
    *p=*q;
    *q=temp;

    printf("El valor de *p=%d, *q=%d y *r=%d\n", *p, *q, *r);
    
    x = 5;
    y = -4;
    p = &x;
    q = &y;
    r = p;

    int *tmp=NULL;
    tmp=p;
    p=q;
    q=tmp;

    printf("El valor de *p=%d, *q=%d y *r=%d\n", *p, *q, *r);
    
    return (EXIT_SUCCESS);
}
