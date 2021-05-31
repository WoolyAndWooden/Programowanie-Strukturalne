#include <iostream>
#include<string.h>

using namespace std;

int foo(char *tekst)
{
    int i = 0;
    while(tekst[i] != 0)
    {
        i++;
    }
    return i;

}

int main()
{
    char *tekst = "Hello world!";
    printf("Napis \"%s\" ma %d znakow", tekst, foo(tekst));
    return 0;
}
