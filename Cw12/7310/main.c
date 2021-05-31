#include <stdio.h>
#include <stdlib.h>

struct element
{
    int x;
    struct element* next;
};

struct element * utworz()
{
    struct element * Lista = malloc(sizeof(struct element));
    Lista->next = NULL;
    return Lista;

}

void show(struct element * Lista)
{
    struct element * temp = Lista;
    if(temp==NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(temp!=NULL)
    {
        printf("%d\n", temp->x);
        temp = temp->next;
    }
    printf("----\n");
}

int main()
{
    struct element * Lista1 = utworz();
    show(Lista1);

    return 0;
}
