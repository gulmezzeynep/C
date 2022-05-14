#include <stdio.h>
#include <stdlib.h>

int main(){

    int sayac=0;
    int i;
    for (i=1; i<=10;i++)//sayac=1+3+4+5+6+7+8+9+10=55
    {
        sayac=sayac+i;
    }
    printf("Sayac= %d",sayac);

    return 0;
}