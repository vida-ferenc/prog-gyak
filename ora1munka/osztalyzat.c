#include <stdio.h>
int main()
{
    int i;
    printf("Adj meg egy számot:");
    scanf("%d",&i);
    
    switch(i)
    {
        case 5:
            printf("Jeles\n");
            break;
        
        case 4:
            printf("Jó\n");
            break;

        case 3:
            printf("közepes\n");
            break;
        
        case 2:
            printf("elégséges\n");
            break;
        case 1:
            printf("elégtelen\n");
            break;

        default:
            printf("ervenytelen\n");
            break;

    }


    return 0;
}