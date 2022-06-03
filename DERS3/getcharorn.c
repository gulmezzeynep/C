#include <stdio.h>

int main(void){
    int c;

    while ((c=getchar()) != EOF ) //ctrl+d yaparak girdi sonuna ulaşıyoruz.
        putchar(c);

    return 0;

}