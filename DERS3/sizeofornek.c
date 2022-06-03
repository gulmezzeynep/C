#include <stdio.h>

int main(void){
    int c;

    printf("%d\n", sizeof(int));

    c='0';
    printf("'%c -> %d\n'", c ,c );

    c=' ' ;
    printf("'%c -> %d\n'", c, c);

    return 0;
    
}