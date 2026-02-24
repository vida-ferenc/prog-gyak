#include <stdio.h>
int main()
{
    int szam;
    int szamlalo=0;   
    
    do 
    {
        printf("Egész szám (vége: 0):");
        scanf("%d",&szam);
        if (szam!=0)
        {
            ++szamlalo;
        }

    } while( szam!=0 );

    printf("Elemek száma:%d\n",szamlalo);




}