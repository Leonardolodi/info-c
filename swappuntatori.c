#include <stdio.h>
void swap (int *pm, int *pn);
int main()
{
    int a=2, b=3;
    printf("\na: %d, b: %d \n", a, b);
    swap(&a,&b);
    printf("\na: %d, b: %d \n", a, b);
}
void swap (int *pm, int *pn)
{
    int t;
    t=*pm;
    *pm=*pn;
    *pn=t;
}