#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "listaEsami.h"

void nuovalista(Lista *pl)
{
    *pl=NULL;
}

void instesta(Lista *pl, int m, int p)
{
    Nodo* aux= (Nodo*)malloc(sizeof(Nodo));
    if(aux==NULL)
    {
        printf("\nerrore allocazione memoria\n");
        exit(3);
    }
    aux->dato.matricola= m;
    aux->dato.votopratica= p;
    aux->next = *pl;
    *pl=aux;
}

void aggiorna(Lista *pl, Record r)
{
    int flag=1;
    while(*pl!=NULL)
    {
        if(r.matricola==(*pl)->dato.matricola)
        {
            if(r.tipoprova=='T')
            {
                if(r.punteggio>0)
                {
                    (*pl)->dato.vototeoria=(*pl)->dato.vototeoria+r.punteggio;
                }
            }
            else
            {
                if(r.punteggio>0)
                {
                    (*pl)->dato.votopratica=(*pl)->dato.votopratica+r.punteggio;
                }
            }
            flag=0;
        }
        pl=&(*pl)->next;
    }
    if(flag==1)
    {
        instesta(pl, r.matricola, r.punteggio);
    }
}
void stampalista(Lista l)
{
    while(l!=NULL)
    {
        printf("\n%d", l->dato.matricola);
        if(l->dato.vototeoria+l->dato.votopratica<=18)
        {
            printf(" non superato");
        }
        else if(l->dato.vototeoria+l->dato.votopratica>30)
        {
            printf(" 30 e lode");
        }
        else
        {
            printf(" %d", l->dato.vototeoria+l->dato.votopratica);
        }
        l=l->next;
    }
    printf("\n\n");
}