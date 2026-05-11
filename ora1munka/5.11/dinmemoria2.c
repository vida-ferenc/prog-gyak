#include <stdio.h>
#include <string.h>
int main()
{
    char *s="Debrecen";
    printf("%s\n",s);
    printf("%p\n",s); //memorabeli cim
    printf("%p\n",&s[0]);//memorabeli cim



    return 0;
}