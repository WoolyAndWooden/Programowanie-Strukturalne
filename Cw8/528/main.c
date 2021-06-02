#include <stdio.h>
#include <stdlib.h>

int len(char *tekst)
{
    int i;
    for(i = 0; tekst[i] != '\0'; i++);
    return i;
}

void foo(char str[])
{
    int lenstr = len(str);

    for(int i = 0; i < lenstr; i++)
    {
        if(str[i] > 96 && str[i] < 123) str[i] -= 32;
    }
}
int main()
{
    char  tekst[] = "HelloazA world!";
    foo(tekst);
    printf("%s", tekst);
    return 0;
}
