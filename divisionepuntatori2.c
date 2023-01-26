#include <stdio.h>
#include <stdlib.h>
void divisione (int dividendo, int divisore, int *pquoz, int *presto);
int main()
{
    int quoziente, resto, div, divi;
    printf("\ninserisci dividendo e divisore [x x]: ");
    scanf("%d%d", &div, &divi);
    divisione(div, divi, &quoziente, &resto);
    printf("\nla divisione da come resto %d, e come quozionte %d\n", resto, quoziente);
}
void divisione (int dividendo, int divisore, int *pquoz, int *presto)
{
    if(divisore==0)
    {
        printf("\nla divisione non puo essere svolta\n");
        exit(1);
    }
    else
    {
        *pquoz=dividendo/divisore;
        *presto=dividendo%divisore;
    }
}