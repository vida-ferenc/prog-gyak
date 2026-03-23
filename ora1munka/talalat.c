#include <stdio.h>

int elso_elofordulas(int n, const int tomb[], int keresett) 
{
    for (int i = 0; i < n; i++) 
    {
        
        if (tomb[i] == keresett) 
        {
            return i; 
        }
    }

    return 0;
}

int main() 
{
    int szamok[] = {10, 25, 72, 5, 72, 90}; 
    int meret = 6;
    int mit_keresunk = 25;

    int index = elso_elofordulas(meret, szamok, mit_keresunk);

    if (index != 0) 
    {
        printf("A(z) %d eloszor a(z) %d. indexen található.\n", mit_keresunk, index);
    } 
    else 
    {
        printf("A(z) %d nincs benne a tömbben.\n", mit_keresunk);
    }

    return 0;
}