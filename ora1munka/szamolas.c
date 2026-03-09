#include <stdio.h>

int main()
{   
    printf("Add meg a számot:");
    int szam;
    scanf("%d",&szam);
    
    printf("Add meg a 2. számot:");
    int szam2;
    scanf("%d",&szam2); 
    
    int osszeg;
    osszeg = szam + szam2;
    printf("A megadott számok összege: %d\n",osszeg);
    
    int szorzat;
    szorzat= szam * szam2;
    printf("A megadott számok összege: %d\n",szorzat);

    return 0;
}
