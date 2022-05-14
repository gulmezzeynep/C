#include <stdio.h>

int main(void)
{
    int num;

    while (scanf("%d", &num) != EOF )
        printf("Read: %d\n", num);

    return 0;
}