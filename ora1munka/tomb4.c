#include <stdio.h>

void tkiiro(int n,const int tomb[])
{
    for (int i=0;i<n;i++)
    {
        printf("%d\n",tomb[i]);
    }

}
int osszegzo(int n,const int tomb[])
{
    int sum;
    for (int i=0;i<n;i++)
    {
        sum+=tomb[i];
    }
    return sum;
}

int main()
{
    int szamok[]={8, 17 ,53 ,9, 67};
    int meret =5;
    int i;
    tkiiro(meret,szamok);
    printf("osszeg: %d\n",osszegzo(meret,szamok));

    return 0;
}