#include <stdio.h>

void tkiiro(int n,const int tomb[])
{
    for (int i=0;i<n;i++)
    {
        printf("%d\n",tomb[i]);
    }

}

int main()
{
    int szamok[]={8, 17 ,53 ,9, 67};
    int meret =5;
    int j;
    int i,c;

    tkiiro(meret,szamok);
    
    j=meret-1;
    i=0;
    while (i<j)
    {
        //csere
        c=szamok[i];
        szamok[i]=szamok[j];
        szamok[j]=c;
        i++;
        j--;
    }

    tkiiro(meret,szamok);
    return 0;
}