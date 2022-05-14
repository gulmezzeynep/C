#include <stdio.h>
//2 ve (-3) sayılarının ilk 10 değer üssünü alan program.
int power(int m, int n);

int main(void)
{
    int i;

    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2, i), power(-3, i));

    return 0;
}

int power(int base, int n)
{
    int i, p;

    p = 1;
    for (i = 1; i <= n; ++i)
        p = p * base;
    return p;
}
