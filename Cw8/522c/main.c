#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<stddef.h>

int foo(char *tekst)
{
    int i = 0;
    while(tekst[i] != 0)
    {
        i++;
    }
    return i;

}

int foo2(wchar_t *tekst)
{
    int i = 0;
    while(tekst[i] != 0)
    {
        printf("%c\n", tekst[i]);
        i++;
    }
    return i;

}

int main()
{
    char *tekst = "Hello world!";

    wchar_t *tekst2 = "Hello world!";

    printf("Napis \"%s\" ma %d znakow\n", tekst, foo(tekst));

    printf("Napis \"%s\" ma %d znakow", tekst2, foo2(tekst2));
    return 0;
}
