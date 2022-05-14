#include <stdio.h>
#include <stdlib.h>

//kod çıktı vermez.atoi fonksiyonunun nasıl çalıştığını göstermek için bir örnek.

int atoi(char s[])
{
    int i, n;
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}