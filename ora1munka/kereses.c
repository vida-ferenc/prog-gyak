#include <stdio.h>

int benne_van(int n, const int tomb[], int keresett)
{
    for (int i = 0; i < n; i++) 
    {
        if (tomb[i] == keresett) 
        {
            return 1; 
        }
    }
    return 0; 
}

int main() 
{
    int szamok[] = {4, 5, 5557, 72, 641, 1, 625, 72};
    int meret = 8;
    int mit_keresünk = 1;

    if (benne_van(meret, szamok, mit_keresünk)) 
    {
        printf("Igen, a(z) %d benne van a tömbben.\n", mit_keresünk);
    } 
    else 
    {
        printf("Nem, a(z) %d nincs benne a tömbben.\n", mit_keresünk);
    }

    return 0;
}