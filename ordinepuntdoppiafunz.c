#include <stdio.h>
#include <stdlib.h>
void ordina (int *pa, int *pb);
void swap(int *px, int *py);
int main()
{
    int a, b;
    printf("\ninserisci i valori di a e b: ");
    scanf("%d%d", &a, &b);
    printf("\n i valori: %d %d", a, b);
    ordina(&a, &b);
    printf("\n i valori crescenti: %d %d\n",a,b);
}
void ordina (int *pa, int *pb)
{
    int x, y;
    x=*pa;
    y=*pb;
    if(x>y)
    {
        swap(&x, &y);
        printf("\n i valori: %d %d", x, y);
        *pa=x;
        *pb=y;
    }
}
void swap(int *px, int *py)
{
    int t;
    t=*px;
    *px=*py;
    *py=t;
}