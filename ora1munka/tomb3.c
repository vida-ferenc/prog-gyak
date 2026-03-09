#include <stdio.h>

void tkiiro(int n,const int tomb[])
{
    for (int i=0;i<n;i++)
    {
        printf("%d\n",tomb[i]);
    }

    //tomb[0]=90;
    n=n+1 ;

}


int main()
{
    int szamok[]={8, 17 ,53 ,9, 67};
    int meret =5;
    int i;
    printf("elotte:%d\n",meret);
    printf("elotte%d\n",szamok[0]);
    tkiiro(meret,szamok);
    

    printf("utana%d\n",szamok[0]);
    printf("utana meret:%d\n",meret);
    return 0;
}