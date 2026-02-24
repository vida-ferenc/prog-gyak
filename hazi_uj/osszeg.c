#include <stdio.h>
int main()
{
    int i;
    int k;
        i=1;
        k=0;
        while (i <= 100)
            {
            k=k+i;
            ++i;
            }
    int ki;
        {
            printf("1-től 100-ig a számok összege:%d\n", k);
        }
    return 0;
}