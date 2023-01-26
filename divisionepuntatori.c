#include <stdio.h>
void divisione (int dividendo, int divisore, int *pquoz, int *presto);
int main()
{
    int quoziente, resto;
    printf("\neseguo la divisione fra 15 e 7: ");
    divisione(15, 7, &quoziente, &resto);
    printf("\nla divisione fra 15 e 7 da come resto %d, e come quozionte %d\n", resto, quoziente);
}
void divisione (int dividendo, int divisore, int *pquoz, int *presto)
{
    *pquoz=dividendo/divisore;
    *presto=dividendo%divisore;
}