#include <stdio.h>
#include <string.h>
#include "prog1.h"
int get_int(string kiir)
{
    int szam;
    printf("%s",kiir);
    scanf("%d",&szam);
    return szam;
}



int main()
{   
    int szam;
    szam = get_int("Adja meg");
    printf("a szam %d\n",szam);
    return 0;
}