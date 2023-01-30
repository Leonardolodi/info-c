#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "listaGiornate.h"

void nuovalista(Lista *pl)
{
    *pl=NULL;
}

void instesta(Lista *pl, int g, int m, float o)
{
    Nodo* aux =(Nodo*)malloc(sizeof(Nodo));
    if(aux==NULL)
    {
        printf("\nla memoria non è stata allocata correttamente\n");
        exit(3);
    }
    aux->dato.giorno=g;
    aux->dato.mese=m;
    aux->dato.oretotali+=o;
    aux->next =*pl;
    *pl=aux;
}
void aggiorna (Lista *pl, Record r)
{
    int flag=1;
    while (*pl!=NULL)
    {
        if(r.giorno==(*pl)->dato.giorno && r.mese==(*pl)->dato.mese)
        {
            (*pl)->dato.oretotali=(*pl)->dato.oretotali+r.orelavorate;
            flag=0;
        }
        pl=&(*pl)->next;
    }
    if(flag==1)
    {
        instesta(pl, r.giorno, r.mese, r.orelavorate);
    }
}

void stampalista(Lista l)
{
    printf("\n\n");
    while(l!=NULL)
    {
        printf("\n%d / %d -- %f", l->dato.giorno, l->dato.mese, l->dato.oretotali);
        l=l->next;
    }
    printf("\n\n");
}