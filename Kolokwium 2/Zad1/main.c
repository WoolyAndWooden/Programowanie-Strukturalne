#include <stdio.h>
#include <stdlib.h>

int main()
{
    char napis[40]="49214MtPpXU39rYXYw";
    char w = *(napis+2); //w=2

    int x = napis[3]; // x=49,w=2

    w++; // x=49 ,w=3

    int b= x--; // x=49 , b=49,w=3

    w=(x-=9)+1; // x=39 , b=49,w=(

    x=x^9; // x= 46, b=49,w=(

    b=x+++b; // x=47 , b=95,w=(

    return 0;
}
