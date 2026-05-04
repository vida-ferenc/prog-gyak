#include <stdio.h>
void csere(int *a,int *b)
    {
        int tmp=*a;
        *a=*b;
        *b=tmp;
        printf("%d, %d\n",*a,*b);
    }

int main()
{
    int x=1;
    int y=2;
    printf("Előtte %d, %d\n",x,y);
    csere(&x,&y);
    printf("utána: %d ,%d\n",x,y);

    return 0;
}