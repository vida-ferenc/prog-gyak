#include <stdio.h>
int main()
{
    int rovid;
    printf("Add meg a téglalap rövidebbik oldalát: ");
    scanf("%d",&rovid);

    int hosszu;
    printf("Add meg a téglalap hosszabik oldalát: ");
    scanf("%d",&hosszu);
    
    int kerulet;
    kerulet=2*hosszu+2*rovid;
    printf("A téglalap kerülete: %dcm\n",kerulet);

    int terulet;
    terulet=hosszu*rovid;
    printf("A téglalap területe: %dcm\n",terulet);


    return 0;
}