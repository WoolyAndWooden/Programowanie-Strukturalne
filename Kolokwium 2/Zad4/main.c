#include <stdio.h>
#include <stdlib.h>

struct Biegacz
{
    char* imie;
    int rekord;
};
struct Biegacz foo(struct Biegacz * tab, unsigned int a)
{
    struct Biegacz rekord = tab[0];
    for(int i = 1; i < a; i++)
    {
        if(tab[i].rekord >= rekord.rekord)
            rekord = tab[i];
    }
    return rekord;
};
int main()
{
    int a = 5;
    struct Biegacz *tab = malloc(sizeof(struct Biegacz) * a);
    for(int i = 0; i < a; i++)
    {
        tab[i].imie = "Hermenegild"+i;
        if(i%2==0)
            tab[i].rekord = (i+2)*15;
        else
            tab[i].rekord = -15*(i+2);

        printf("Imie biegacza:\n%s\nRekord biegacza:\n%d\n----\n", tab[i].imie, tab[i].rekord);
    }
    tab[1].rekord = 200;
    tab[3].rekord = 200;
    struct Biegacz rekordowiec = foo(tab, a);
    printf("Imie rekordowca:\n%s\nRekord rekordowca:\n%d\n----\n", rekordowiec.imie, rekordowiec.rekord);
    return 0;
}
