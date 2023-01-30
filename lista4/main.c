#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "listaEsami.h"

int main(int argc, char* argv[])
{
    FILE *fb;
    Record r;
    Lista l=NULL;
    nuovalista(&l);
    if(argc!=2)
    {
        printf("\nmanca il file .dat nel terminale\n");
        exit(1);
    }
    fb=fopen(argv[1], "rb");
    if(fb==NULL)
    {
        printf("\nerrore apertura file\n");
        exit(2);
    }
    while(fread(&r, sizeof(Record), 1, fb)==1)
    {
        // printf("\n%d %d %c", r.matricola, r.punteggio, r.tipoprova);
        aggiorna(&l, r);
    }
    fclose(fb);
    stampalista(l);
}