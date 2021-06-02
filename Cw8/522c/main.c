#include <stdio.h>
#include <stdlib.h>


int foo(char *tekst)
{
    int i;
    for(i = 0; tekst[i] != 0; i++);
    return i;
}

int foo2(wchar_t *tekst)
{
    int i;
    for(i = 0; tekst[i] != 0; i++);
    return i;

}

int main()
{
    char *tekst = "Hello world!";

    wchar_t *tekst2 = u"Hello world!";

    printf("Napis \"%s\" ma %d znakow\n", tekst, foo(tekst));

    printf("Napis \"%ws\" ma %d znakow", tekst2, foo2(tekst2));
    return 0;
}
