#include <stdio.h>
#include <stdlib.h>

int main(){

    //klavyeden girilen sayı 15'e tam bölünüyorsa...

    int sayi;
    printf("Sayiyi girin: ");
    scanf("%d",&sayi);

    if (sayi%3==0 || sayi%5==0)
    {
        printf("Sayi 3 veya 5'e tam bölünür.");
    }
    else
    {
        printf("Sayi 3 veya 5'e tam bölünmez.");
    }
    
    return 0;
}