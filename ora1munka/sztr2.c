#include <stdio.h>
#include <string.h>
#include "prog1.h"
int get_int()
{
    int s;
    printf("Adj meg egy számot:");
    scanf("%d",&s);
    return s;
}



int main()
{   
    int szam;
    szam = get_int();
    string szoveg ="Nagykutya";
    printf("a szam %d\n",szam);
    return 0;
}