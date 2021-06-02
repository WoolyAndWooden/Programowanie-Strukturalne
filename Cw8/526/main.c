#include <stdio.h>
#include <stdlib.h>

//Funkcje na długość
int len(char *tekst)
{
    int i;
    for(i = 0; tekst[i] != '\0'; i++);
    return i;
}

int wlen(wchar_t *tekst)
{
    int i;
    for(i = 0; tekst[i] != 0; i++);
    return i;

}

void foochar(char *str1, char str2[], unsigned int n)
{
    int lenstr1 = len(str1);
    int lenstr2 = len(str2);

    if(lenstr2 >= lenstr1)
    {
        for(int i = 0; i < n; i++)
        {
            str2[i] = str1[i];
        }
        str2[n] = '\0';
    }

}

void foochar2(wchar_t *str1, wchar_t str2[], unsigned int n)
{
    int lenstr1 = wlen(str1);
    int lenstr2 = wlen(str2);

    if(lenstr2 >= lenstr1)
    {
        for(int i = 0; i < n; i++)
        {
            str2[i] = str1[i];
        }
        str2[n] = 0;
    }
}

int main()
{
    char *tekst = "Hello World";
    char tekst2[] = "Ala lubi pieski";

    wchar_t *wtekst = u"Hello World";
    wchar_t wtekst2[] = u"Ala lubi pieski";
    printf("%s, %ls\n", tekst2, wtekst2);
    foochar(tekst, tekst2, 3);
    foochar2(wtekst, wtekst2, 5);
    printf("%s, %ws\n", tekst2, wtekst2);

    return 0;
}
