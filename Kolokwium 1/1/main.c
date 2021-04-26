#include <stdio.h>
#include <stdlib.h>

//Z jakiegoś powodu debuger mi się czasem psuje, więc musiałem zrobić nowy projekt do zadania 1go

int foo(int*a,int*b)
{
    return *a+*b;
}

int main()
{
    int tab[] = {-2,2,-3,0,4,4,5};
    int *wsk=tab+1;
    int b = *(wsk+=4); //b=4
    int c = b+2; // b= 4 , c=6
    int d = foo(&b,&c); // b= 4 , c=  6, d=10
    int e = (wsk+=-1)[3]; // b= 4 , c= 6 , d= 10 , e=0
    e = (d -= 3) + (c += 2); // b= 4 , c= 8 , d= 7 , e=15
    b = *wsk + e+3; // b= 22 , c= 8 , d=  7, e=15
    c = d - (b+=3); // b= 25 , c= -18 , d= 7 , e=15
    b= (--c)-(d++);  // b= -26 , c= -19 , d= 8 , e=15
    return 0;
}
