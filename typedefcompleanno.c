#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    typedef struct{
        int giorno, anno;
        char mese[20];
    } Data;
    Data data;
    typedef struct{
        int nome[20];
        Data nascita;
    } Persona;
    Persona persona;
    printf("\ninserisci il giorno(gg), il mese, l'anno(aaaa): ");
    scanf("%d%s%d", &data.giorno, data.mese, &data.anno);
    printf("\nla data: %d %s %d", data.giorno, data.mese, data.anno);
    printf("\n\n");

    printf("\ninserisci il nome: ");
    scanf("%s", persona.nome);

    printf("\ninserisci il giorno(gg), il mese, l'anno(aaaa) del tuo compleanno: ");
    scanf("%d%s%d", &persona.nascita.giorno, persona.nascita.mese, &persona.nascita.anno);
    printf("\nla data: %d %s %d", persona.nascita.giorno, persona.nascita.mese, persona.nascita.anno);
    printf("\n\n");

    if(data.giorno==persona.nascita.giorno && strcmp(persona.nascita.mese, data.mese)==0)
    {
        printf("\nAUGURI DI BUON COMPLEANNO\n");
    }
    printf("\n\n");
}