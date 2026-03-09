#include <stdio.h>
int osszegzo(int n)
{   
    int i,ossz=0;
    for (i=1; i<=n; i++)
    {
        ossz+=i;
    }
    return ossz;
}
int main()
{   
    int szam,nszam;
    printf("Adja meg a számot");
    scanf("%d",&szam);
    osszegzo(szam);
    printf("%d\n",osszegzo(szam));
    

    return 0;
}
