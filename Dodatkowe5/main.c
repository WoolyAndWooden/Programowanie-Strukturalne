#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char toHex(int a);
int toDecimal(char a);


int main()
{
    string a = '5A';
    printf("%d", toDecimal(a[0]) + toDecimal(a[1]));
    return 0;
}

char toHex(int a)
{
    if(a == 10)
        return 'A';
    if(a == 11)
        return 'B';
    if(a == 12)
        return 'C';
    if(a == 13)
        return 'D';
    if(a == 14)
        return 'E';

    return 'F';
}

int toDecimal(char a)
{
    if(a == 'A')
        return 10;
    if(a == 'B')
        return 11;
    if(a == 'C')
        return 12;
    if(a == 'D')
        return 13;
    if(a == 'E')
        return 14;
    if(a == 'F')
        return 15;

    return a - '0';
}
