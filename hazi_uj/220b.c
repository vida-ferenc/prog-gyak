#include <stdio.h>

int main()
{
    int n,i;

    printf("n: ");
    scanf("%d", &n);   


    for (i = n; i >= 1; i=i-1)
    {
        if (i % 2 == 1) 
        {
            printf("%d\n", i);
        }
    }

    return 0;
}