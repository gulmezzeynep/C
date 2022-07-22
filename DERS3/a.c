#include <stdio.h>

int main(void)
{
    int i,j;
    i = 1;
    j = i++;
    printf("i = %d  j = %d", i,j);
    return 0;
}