#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int Function2217verAWasCalledOut = 0;

int Power(int x, int y);


int zad222(int n)
{
    int silnia = 1;
    for(int i = 1; i <= n; i++)
    {
        silnia*=i;
    }
    return silnia;
}

int zad224(unsigned int n)
{
    if(n==0) return 1;
    return 2*zad224(n-1);
}

int zad228(unsigned int n)
{
    for(int i = 0; i < n; i++)
    {
        if(Power(i, 2) == n) return i;
        else if(Power(i, 2) < n && Power(i+1, 2)>n) return i;
    }

}

int zad2212roots(unsigned int n, unsigned int m)
{
    for(int i = 0; i < n; i++)
    {
        if(Power(i, m) == n) return i;
        else if(Power(i, m) < n && Power(i+1, m)>n) return i;
    }

}

int zad2212(unsigned int n, unsigned int m)
{
    if(m<=1)
    {
        printf("\nError: m Lower or Equal 1\n");
        return 0;
    }
    if(n == 0) return 0;
    return zad2212roots(n, m) + zad2212(n-1, m);
}

void zad2217verA()
{
    Function2217verAWasCalledOut++;

    printf("\nzad2217verA was called out for the %dth time\n", Function2217verAWasCalledOut);

}

int zad2220(unsigned int n)
{
    if(n==1) return 1;
    return n*zad2220(n-1);
}

int zad2224(unsigned int n)
{
    if(n==0) return 1;
    if(n==1) return 2;
    return zad2224(n-1);

}

int zad2229(int a, int b)
{
    if(a==b) return b;
    else if(a>b) return zad2229(a-b, b);
    else return zad2229(a, b-a);
}

int main()
{
    zad2217verA();

    printf("\nzad 2.2.2\n%d\n", zad222(5));

    zad2217verA();

    printf("\nzad 2.2.4\n%d\n", zad224(10));

    zad2217verA();

    printf("\nzad 2.2.8\n%d\n", zad228(15));

    zad2217verA();

    printf("\nzad 2.2.12\n%d\n", zad2212(5, 2));

    zad2217verA();

    printf("\nzad 2.2.20\n%d\n", zad2220(5));

    zad2217verA();

    printf("\nzad 2.2.24\n%d\n", zad2224(100));

    zad2217verA();

    printf("\nzad 2.2.29\n%d\n", zad2229(10, 15));

    zad2217verA();

    return 0;
}

int Power(int x, int y)
{
    if(y==0) return 1;
    return x*Power(x, y-1);
}
