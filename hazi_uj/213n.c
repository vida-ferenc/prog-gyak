#include <stdio.h>
int main()
{
    int szam;
    int pozitiv=0; 
    int negativ=0;  
    
    do 
    {
        printf("Egész szám (vége: 0):");
        scanf("%d",&szam);
        if (szam!=0)
        {
            if(szam >0)
            {
                ++pozitiv;
            }
            else
            {
                ++negativ;
            }
        }

    } while( szam!=0 );

    printf("Pozitív elemek száma:%d\n",pozitiv);
    printf("Negatív elemek száma:%d\n",negativ);




}