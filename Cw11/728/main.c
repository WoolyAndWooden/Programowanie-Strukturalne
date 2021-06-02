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
    char tekst[] = "temp";
    printf("Podaj swoje imie:\n");
    scanf("%s", tekst);
    student->imie = tekst;




}

int main()
{
    struct student s;
    foo(&s);
    printf("%s", s.imie);

    //printf("Imie: %d\n", dlugosc(tekst));


    return 0;
}
