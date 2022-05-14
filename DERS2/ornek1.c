#include <stdio.h>
//karakter saysını hesaplar.
int main(void)
{
    long nc;

    nc = 0;
    while (getchar() != EOF)//enter tuşunu da karakter olarak sayıyor.ctrl-d yaparak sonuçlandırıyoruz.
        ++nc;
    printf("%ld\n", nc);

    return 0;
}