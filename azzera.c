#include <stdio.h>
void azzera (int *pa);
int main()
{
    int a;
    printf("\ninserisci un valore per a: ");
    scanf("%d", &a);
    printf("\nil valore di a: %d", a);
    azzera(&a);
    printf("\nil valore di a dopo: %d\n", a);
}
void azzera (int *pa)
{
    *pa=0;
}