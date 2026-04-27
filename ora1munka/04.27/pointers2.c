#include <stdio.h>
void ketprim(int *p, int *q)
{
    *p=2;
    *q=3;
}

int main()
{
    int x=66;
    int y=77;

    
    
    printf("x=%d, y=%d\n",x,y);

    ketprim(&x,&y);

    printf("x=%d, y=%d\n",x,y);







    return 0;
}
