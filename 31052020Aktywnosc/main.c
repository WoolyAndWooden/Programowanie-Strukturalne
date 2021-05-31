#include <stdio.h>
#include <stdlib.h>

int main()
{
    char napis[20]="DANIEL"; //tu trzeba wpisac swoje imie, wszystkie litery duze
    char z = *(napis+2); //z=N
    int a = napis[3]; // a= 73  ,z=N
    z++; // a=73   ,z=O
    ++a; // a= 74  ,z=O
    z=(a-=2)+3; // a=72   ,z=K
    a=a^4; // a=76   ,z=K
    return 0;
}
