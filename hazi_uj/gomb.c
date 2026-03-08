#include <stdio.h>
#include <math.h>

double get_double() 
{
    double x;
    scanf("%lf", &x);
    return x;
}

double felszin(double r) 
{
    return 4 * M_PI * r * r;
}

double terfogat(double r) 
{
    return (4.0 / 3.0) * M_PI * r * r * r;
}

int main() 
{
    double r;

    printf("Add meg a gomb sugarat: ");
    r = get_double();

    printf("A gomb felszine: %.2f\n", felszin(r));
    printf("A gomb terfogata: %.2f\n", terfogat(r));

    return 0;
}