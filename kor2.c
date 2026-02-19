#include <stdio.h>
int main()
{
    float sugar;
    printf("Add meg a kör sugarát:");
    scanf("%f",&sugar);
    
    float p;
    p=3.14;

    float terulet;
    terulet= sugar*sugar*p;
    printf("A kör területe:%f\n",terulet);

    float kerulet;
    kerulet= 2*sugar*p;
    printf("A kör kerület: %f\n", kerulet);






    return 0;
}