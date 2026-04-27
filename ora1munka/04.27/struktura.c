#include <stdio.h>
typedef struct
 {
    int x;
    int y;   /* data */
 }Pont;
 void kiir(Pont p)
{
    printf("P(%d,%d)\n",p.x,p.y);
}
int main()
{

    Pont a= {1,2};
    kiir(a);
    a.x=11;
    a.y=24;
    kiir(a);
    return 0;
}