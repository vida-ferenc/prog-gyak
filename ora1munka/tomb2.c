#include <stdio.h>

void tkiiro(int n,int tomb[])
{
    for (int i=0;i<n;i++)
    {
        printf("%d\n",tomb[i]);
    }

    tomb[0]=90;

}


int main()
{
    int szamok[]={8, 17 ,53 ,9, 67};
    int meret =5;
    int i;
    printf("előtte %d\n",szamok[0]);
    tkiiro(meret,szamok);
    

    printf("utána %d\n",szamok[0]);
    return 0;
}