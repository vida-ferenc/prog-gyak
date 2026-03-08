#include <stdio.h>

int kerulet(int a, int b)
{
    return 2 * (a + b);
}

int terulet(int a, int b) 
{
    return a * b;
}

int main() 
{
    int a, b;
    printf("Add meg a téglalap szélességét ");
    scanf("%d", &a);
    printf("Add meg a téglalap magasságát: ");
    scanf("%d", &b);

    printf("Kerület: %d\n", kerulet(a, b));
    printf("Terület: %d\n", terulet(a, b));

    return 0;
}