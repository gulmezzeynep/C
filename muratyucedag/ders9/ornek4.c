#include <stdio.h>
#include <stdlib.h>

int main(){

    //klavyeden girilen sayı 15'e tam bölünüyorsa...

    int sayi;
    printf("Sayiyi girin: ");
    scanf("%d",&sayi);

    if (sayi%3==0 && sayi%5==0 && sayi%7==0)
    {
        printf("Sayi 3, 5 ve 7'ye tam bölünür.");
    }
    else
    {
        printf("Sayi 3, 5 ve 7'ye tam bölünmez.");
    }
    
    return 0;
}