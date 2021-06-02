#include <stdio.h>
#include <stdlib.h>



void foo(char nap1[], char *nap2)
{
    int i = 0;
    int j = 0;

    for(; nap1[i] != 0; i++)
    {
        if(nap1[i] != nap2[i])
        {
            if(j < i)
            {
                nap1[j] = nap1[i];
            }
            j++;
        }
    }
    nap1[j] = 0;
}

void foo2(wchar_t nap1[], wchar_t *nap2)
{
    int i = 0;
    int j = 0;

    for(; nap1[i] != 0; i++)
    {
        if(nap1[i] != nap2[i])
        {
            if(j < i)
            {
                nap1[j] = nap1[i];
            }
            j++;
        }
    }
    nap1[j] = 0;
}
int main()
{
    char tekst1[] = "Adam";
    char *tekst2 = "Agata";

    wchar_t wtekst1[] = u"Andrzej";
    wchar_t * wtekst2 = u"Uddzzaj";
    foo(tekst1, tekst2);
    foo2(wtekst1, wtekst2);
    printf("%s, %s\n%ls, %ls", tekst1, tekst2, wtekst1, wtekst2);
    return 0;
}
