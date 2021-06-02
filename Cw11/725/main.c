#include <stdio.h>
#include <stdlib.h>

struct punkt10
{
    double wspol[10];
};

void foo(struct punkt10 tab1[], struct punkt10 tab2[], unsigned int n)
{
    for(int i = 0; i < n; i++)
    {
        tab2[i] = tab1[i];
    }
}
int main()
{
    struct punkt10 tab1[2], tab2[2];

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            tab1[i].wspol[j] = i + j;
        }
    }

    foo(tab1, tab2, sizeof(tab1)/sizeof(struct punkt10));

    for(int i = 0; i < 2; i++)
    {
        printf("tab2[%d]:\n", i);
        for(int j = 0; j < 10; j++)
        {
            printf("\twspol[%d] = %f\n", j, tab2[i].wspol[j]);
        }
    }
    return 0;
}
