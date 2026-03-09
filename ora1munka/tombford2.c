#include <stdio.h>

void tkiiro(int n,const int tomb[])
{
    for (int i=0;i<n;i++)
    {
        printf("%d\n",tomb[i]);
    }

}
void tombf(int n ;int tomb)
    int c,i,j;
    j=n-1;
    i=0;
    while (i<j)
    {
        //csere
        c=tomb[i];
        tomb[i]=tomb[j];
        tomb[j]=c;
        i++;
        j--;
    }

int main()
{
    int szamok[]={8, 17 ,53 ,9, 67};
    int meret =5;

    tkiiro(meret,szamok);
    tombf(meret,szamok);
    
    
    return 0;
}