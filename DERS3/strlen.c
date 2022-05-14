#include <stdio.h>
#include <string.h>
//satır sonu karakteri olan (\0) karakterini görene kadar çalışır.
int strlen(char s[])//strlen fonksiyonu boşluk karakterleri dahil stringin karakter uzunluğunu hesaplayan fonksiyondur.
{
    int i;
    while (s[i] != '\0')
        ++i;
    return i;
}
//bu kod çalıştığında sonuç vermez. sadece strlen fonksiyonunun nasıl çalıştığını göstermek için yazılmış.MEsela while döngüsü olduğunu biliyoruz.