#include <stdio.h>
#include <stdlib.h>
void divisione (int dividendo, int divisore, int *pquoz, int *presto, int *pok);
int main()
{
    int quoziente, resto, div, divi, ok;
    printf("\ninserisci dividendo e divisore [x x]: ");
    scanf("%d%d", &div, &divi);
    divisione(div, divi, &quoziente, &resto, &ok);
    if(ok==1)
    {
        printf("\nla divisione non puo essere svolta\n");
    }
    else
    {
        printf("\nla divisione da come resto %d, e come quozionte %d\n", resto, quoziente);
    }
}
void divisione (int dividendo, int divisore, int *pquoz, int *presto, int *pok)
{
    if(divisore==0)
    {
        *pok=1;
    }
    else
    {
        *pquoz=dividendo/divisore;
        *presto=dividendo%divisore;
    }
}