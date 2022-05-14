#include <stdio.h>
#include <stdlib.h>
//artık yıl hesaplayan program.
//Bir yıl 4 ile tam bölünebiliyor, fakat 100 ile bölünemiyorsa artık yıldır. Öte yandan 400 ile tam bölünenler daima artık yıldır.
int main(){

    int year;
    printf("yılı giriniz: ");
    scanf("%d",&year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("%d is a leap year\n", year);
    
    else
        printf("%d is not a leap year\n", year);


    return 0;
}