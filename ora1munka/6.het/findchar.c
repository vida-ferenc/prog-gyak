#include <stdio.h>
#include <string.h>
#include "prog1.h"
int find_char(string szov,char c)
{
    
    for (int i=0;i < strlen(szov);i++)
    {
        if (c==szov[i])
        {
            return i;
        }
    }
    return 0;
}



int main()
{   
    int hely;
    char betu= 'u';
    string szoveg ="Kiskutya";
    hely= find_char(szoveg,betu)+1;
    
    printf("A keresett betu helye %d\n",hely);
    return 0;
} 