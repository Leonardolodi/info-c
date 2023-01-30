#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "listaPiloti.h"

int main(int argc, char* argv[])
{
    FILE *fb;
    Record r;
    Lista l =NULL;
    int i;
    nuovalista(&l);
    if(argc!=2)
    {
        printf("\nhai dimenticato il file.dat\n");
        exit(1);
    }
    fb = fopen(argv[1], "rb");
    if(fb==NULL)
    {
        printf("\nerrore apertura file\n");
        exit(2);
    }
    while(fread(&r,sizeof(Record), 1, fb)==1)
    {
        aggiorna(&l, r);
    }
    fclose(fb);
    stampa(l);
}
