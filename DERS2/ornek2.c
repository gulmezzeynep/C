#include <stdio.h>
//çok büyük bir dosyadadaki karakter saysını hesaplar.
int main(void)
{
    unsigned long long nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ; /* nop */

    printf("%ld\n", nc);

    return 0;
}

