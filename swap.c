#include <stdio.h>
void swap(int x, int y);
int main()
{
    int a=2, b=3;
    printf("\na: %d, b: %d \n", a, b);
    swap(a,b);
    printf("\na: %d, b: %d \n", a, b);
}
void swap(int x, int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("\na: %d, b: %d \n", x, y);
}