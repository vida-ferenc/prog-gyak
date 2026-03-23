#include <stdio.h>
#include <string.h>
//#include "prog1.h"

int main()
{
   char szoveg [100];
   printf("Adja meg a nevét: ");
   fgets(szoveg,100,stdin);
   printf("szia %s !\ ",szoveg);
   return 0;
}