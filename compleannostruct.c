#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
struct data
{
    int giorno;
    int mese;
    int anno;
} oggi;

struct persona
{
    char nome[20];
    struct data compleanno;
}p;
printf("\ninserisci la data di oggi: gg/mm/aaaa:  ");
scanf("%d%d%d",&oggi.giorno, &oggi.mese, &oggi.anno);

printf("\ninserisci il nome della persona:  ");
scanf("%s", p.nome);

printf("\ninserisci la data del compleanno: gg/mm/aaaa:  ");
scanf("%d%d%d",&p.compleanno.giorno, &p.compleanno.mese, &p.compleanno.anno);

printf("\npersona: %s, %d / %d / %d ", p.nome, p.compleanno.giorno, p.compleanno.mese, p.compleanno.anno );
printf("\nla data di oggi: %d / %d / %d", oggi.giorno, oggi.mese, oggi.anno);
printf("\n\n");
if(oggi.giorno==p.compleanno.giorno && oggi.mese==p.compleanno.mese)
{
    printf("\nAUGURI DI BUON COMPLEANNO\n");
}
}