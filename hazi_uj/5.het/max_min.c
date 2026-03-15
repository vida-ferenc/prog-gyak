#include <stdio.h>
int max(int n,const int tomb[])
{
    int max=0;
    for (int i=0;i<n;i++)
    {
        if (tomb[i]> max)
        {
            max=tomb[i];
        }

    }
    return max;
}
int min(int n,const int tomb[])
{
    int j=1;
    int min=tomb[0];
    for (int i=0;i<n;i++)
    {
        if (tomb[i]<tomb[j])
        {
            min=tomb[i];
            
        }
        j+=1;
    }
    return min;
}

int main ()
{
    int tomb1[]={4,5,5557,72,641666,1,625,72};
    int meret=8;
    printf("A tömb legnagyobb eleme: %d\n",max(meret,tomb1));
    printf("A tömb legkissebb eleme: %d\n",min(meret,tomb1));

    return 0;
}