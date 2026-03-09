#include <stdio.h>
int negyzet(int i)
{   
    
    return i*i;
}
int main()
{   
    int szam,nszam;
    printf("Adja meg a számot");
    scanf("%d",&szam);
    negyzet(szam);
    printf("%d\n",negyzet(szam));
    

    return 0;
}
