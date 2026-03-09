#include <stdio.h>

void tkiiro(int n,const int tomb[])
{
    for (int i=0;i<n;i++)
    {
        printf("%d\n",tomb[i]);
    }

}
float osszegzo(int n,const int tomb[])
{
    int sum =0;
    for (int i=0;i<n;i++)
    {
        sum+=tomb[i];
    }
    return sum;
}
float atlags(int n,const int tomb[])
{
     int sum= osszegzo(n,tomb);
     return (float)sum/n;


}
int main()
{
    int szamok[]={8, 17 ,53 ,9, 67};
    int meret =5;
    int i;
    tkiiro(meret,szamok);
    printf("osszeg: %f\n",osszegzo(meret,szamok));
    printf("atlag: %.1f\n",atlags(meret,szamok));

    return 0;
}