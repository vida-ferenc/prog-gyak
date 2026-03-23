#include <stdio.h>
#include <string.h>
#include "prog1.h"

int main()
{
    string nev= get_string("Adja meg a nevét: ");

    printf("Hello %s!\n", nev);

    return 0;
}