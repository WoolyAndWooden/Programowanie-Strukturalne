#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct student
{
    char *nazwisko;
    char *imie;
    char *adres;
    char *pesel;
    char *kierunek;
    char *numer_legitymacji;
};

void foo(struct student *student)
{
    char *tekst;
    printf("Podaj imie:\n");
    scanf("%s", &tekst);

    student->imie = malloc(dlugosc(tekst)*sizeof(char));
    student->imie = tekst;

    printf("%s", student->imie);


    printf("Podaj nazwisko:\n");
    scanf("%s", student->nazwisko);

    printf("Podaj pesel:\n");
    scanf("%s", student->pesel);

    printf("Podaj adres:\n");
    scanf("%s", student->adres);

    printf("Podaj kierunek:\n");
    scanf("%s", student->kierunek);

    printf("Podaj numer legitymacji:\n");
    scanf("%s", student->numer_legitymacji);
}

int dlugosc(char *tekst)
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
    struct student s;
    char *tekst;
    scanf("%s", tekst);
    printf("%s", tekst);
    //
    foo(&s);
    //printf("Imie: %d\n", dlugosc(tekst));


    return 0;
}
