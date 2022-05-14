
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//örnek hocanın örneği değil internetten buldum ato fonksiyonun nasıl çalıştığını anlamak için.
//strcpy fonksiyonu kopyalamaya yarar.

void fonk(void);

int main(void)
{
    char cdizi[40];

    strcpy(cdizi, "78521");//strcpy fonksiyonu "78521" stringini cdizi isimli  diziye kopyalar.
    printf("Karakter dizisi: %s Int değer: %d\n", cdizi, atoi(cdizi));

    strcpy(cdizi, "Bilgisayar");
    printf("Karakter dizisi: %s Int değer: %d", cdizi, atoi(cdizi));

    return 0;	
}