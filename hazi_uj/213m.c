#include <stdio.h>
int main()
{
    int szam;
    int pozitiv=0;   
    
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
        }

    } while( szam!=0 );

    printf("Elemek száma:%d\n",pozitiv);




}