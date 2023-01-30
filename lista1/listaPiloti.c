#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "listaPiloti.h"
void nuovalista(Lista *pl)
{
    *pl=NULL;
}

void instesta(Lista *pl, int p, int i)
{
    Nodo* aux = (Nodo*)malloc(sizeof(Nodo));
    if(aux==NULL)
    {
        printf("\nla memoria non è stata allocata corr.\n");
        exit(3);
    }
    aux->dato.pilota = p;
    switch (i)
    {
    case 0:
    {
        aux->dato.punteggio = 5;
        break;
    }
    case 1:
    {
        aux->dato.punteggio = 3;
        break;
    }
    case 2:
    {
        aux->dato.punteggio = 2;
        break;
    }
    }
    aux->next = *pl;
    *pl =aux;
}
void scorrilista(Lista *pl, Record r, int flag, int i)
{
    flag=1;
    while(*pl!=NULL)
        {
            if(r.podio[i]==(*pl)->dato.pilota)
            {
                switch(i)
                {
                    case 0:
                    {
                        (*pl)->dato.punteggio+=5;
                        break;
                    }
                    case 1:
                    {
                        (*pl)->dato.punteggio+=3;
                        break;
                    }
                    case 2:
                    {
                        (*pl)->dato.punteggio+=2;
                        break;
                    }
                }
                flag=0;
                
            }
            pl=&(*pl)->next;

        }
        if(flag==1)
        {
            instesta(pl, r.podio[i], i);
        }
}
void aggiorna(Lista *pl, Record r)
{
    int flag;
    for (int i = 0; i < 3; i++)
    {
        scorrilista(pl,r,flag, i);
    }
}
void stampa(Lista l)
{
    while(l!=NULL)
    {
        printf("\nnumero %d: %d", l->dato.pilota, l->dato.punteggio);
        l = l->next;
    }
    printf("\n\n");
}
