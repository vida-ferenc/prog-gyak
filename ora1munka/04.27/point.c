#include <stdio.h>
int main()
{
    int x=3 ;
    int y=5;
    int *q;

    int *p;
    printf("x=%d, y=%d\n",x ,y);

    *p=11;
    printf("x=%d, y=%d, %d\n",x ,y,*p);
    
    *p=x ;

    printf("x=%d, y=%d  , %d \n",x ,y,*p);


    p=&x;
    printf("x=%d, y=%d, p=%d\n",x ,y,*p);
    x=111;
    printf("x=%d, y=%d, p=%d\n",x ,y,*p);
    *p=222;
    printf("x=%d, y=%d, p=%d\n",x ,y,*p);
    q=p;
    printf("x=%d, y=%d, p=%d\n",x ,y,*q);
    return 0;
}