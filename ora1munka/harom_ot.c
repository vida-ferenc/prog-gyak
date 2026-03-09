#include<stdio.h>
int main()
{
    int osszeg=0;
    int i=0;
    for (i=0;i<=10;i++)
        {
            if (i%3==0 || i%5==0)
            {
                osszeg+=i;

            }

        }



        printf("az összeg%d\n",osszeg);
    return 0;
}