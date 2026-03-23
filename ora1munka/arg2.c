#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "prog1.h"

int main(int argc, string argv[])
{
    int a,b,c;
    printf("%s, %s\n", argv[1], argv[2]);
    a=atoi(argv[1]);
    b=atoi(argv[2]);
    c=a+b;
    printf("A két szám összege: %d\n",c);
    
    return 0;
}