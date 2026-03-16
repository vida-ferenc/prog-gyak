#include <stdio.h>

int main() {
    int n;

    printf("Magassag: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n % 2 == 0) 
    {
        printf("Hiba: Csak pozitiv paratlan szamot adhatsz meg!\n");
        return 1; 
    }

    int kozep = n / 2;

    
    for (int i = 0; i <= kozep; i++) 
    {
       
        for (int j = 0; j < kozep - i; j++) 
        {
            printf(" ");
        }
        
        for (int j = 0; j < (2 * i + 1); j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    
    for (int i = kozep - 1; i >= 0; i--) 
    {
        
        for (int j = 0; j < kozep - i; j++) 
        {
            printf(" ");
        }
        
        for (int j = 0; j < (2 * i + 1); j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}