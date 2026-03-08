#include <stdio.h>

double kerulet(double r) 
{
    return 2 * r * 3.14;
}

double terulet(double r) 
{
    return r * r * 3.14;
}

int main()
{
    double r;

    printf("Sugar: ");
    scanf("%lf", &r);

    printf("Kerulet: %.2f\n", kerulet(r));
    printf("Terulet: %.2f\n", terulet(r));

    return 0;
}