#include <stdio.h>
#include <stdlib.h>

int main(){
    //klavyeden girilen sayi 5 e tam bölünüyorsa...
    
    int x;
    printf("Sayiyi Giriniz: ");
    scanf("%d",&x);
    if (x%5==0)
    {
        printf("Sayi 5'e tam bölünür.");
    }
    else
    {
        printf("Sayi 5'e tam bölünmez.");
    }
    

    return 0;
}