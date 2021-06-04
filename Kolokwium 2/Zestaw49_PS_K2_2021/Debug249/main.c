#include <stdio.h>
#include <stdlib.h>

int main()
{
    char napis[40]="49214MtPpXU39rYXYw";
    char w = *(napis+2); //w=
    int x = napis[3]; // x=   ,w=
    w++; // x=   ,w=
    int b= x--; // x=   , b=  ,w=
    w=(x-=9)+1; // x=   , b=  ,w=
    x=x^9; // x=   , b=  ,w=
    b=x+++b; // x=   , b=  ,w=
    return 0;
}
