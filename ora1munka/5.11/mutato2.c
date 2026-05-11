#include <stdio.h>
#include <string.h>
int main()
{
    char *s="Debrecen";
    printf("%s\n",s);
    char  *p1=s;
    char  *p2=s+3;
    printf("%c\n",*p1);
    printf("%c\n",*p2);
    printf("A tavolsag %d\n",*p2-*p1);
    printf("A tavolsag %ld\n",p2-p1);


    return 0;
}