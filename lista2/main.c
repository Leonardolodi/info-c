#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "listaGiornate.h"

int main(int argc, char* argv[])
{
    FILE *fb;
    Record r;
    Lista l=NULL;
    nuovalista(&l);

    if(argc!=2)
    {
        printf("\nnon hai inserito il file binario nel terminale\n");
        exit(1);
    }

    fb=fopen(argv[1], "rb");
    if(fb==NULL)
    {
        printf("\nerrore apertura file\n");
        exit(2);
    }
    while (fread(&r, sizeof(Record), 1, fb)==1)
    {
        printf("\n%d %d %f %s",r.giorno, r.mese, r.orelavorate, r.descrizione);
        aggiorna (&l, r);
    }
    fclose (fb);
    stampalista(l);
}