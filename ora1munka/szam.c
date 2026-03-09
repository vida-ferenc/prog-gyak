#include <stdio.h>
int main()
{
    int szam;
    printf("Adj meg egy számot: ");
    scanf("%d",&szam);
    printf("%d\n" ,szam);
    if (szam >0) 
    {  
        printf("A szám pozitív\n");
        
    
    }
    else if (szam==0)
    {
        printf("A szám nulla\n");
    
    }
    else
    {
        printf("A szám negatív\n");
    }
    



return 0;
}

