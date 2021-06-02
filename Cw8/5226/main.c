#include <stdio.h>
#include <stdlib.h>

void foo1(char tekst[])
{
    for(int i = 0; tekst[i] != 0; i++)
    {
        tekst[i] = toupper(tekst[i]);
    }
}

void foo2(wchar_t tekst[])
{
    for(int i = 0; tekst[i] != 0; i++)
    {
        tekst[i] = towupper(tekst[i]);
    }
}
int main()
{
    char tekst[] = "AdAmmm!";
    wchar_t tekst2[] = u"AnnDrzeeej%#@";
    printf("%s, %ls\n", tekst, tekst2);
    foo1(tekst);
    foo2(tekst2);
    printf("%s, %ls\n", tekst, tekst2);
    return 0;
}
