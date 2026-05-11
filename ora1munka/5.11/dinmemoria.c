#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
     
    char s[]="debrecen";
    char *t =malloc(strlen(s)+1);
    strcpy(t, s);
    t[0]=toupper(t[0]);
    printf("%s\n",s);
    printf("%s\n",t);
    free(t);
    return 0;
}