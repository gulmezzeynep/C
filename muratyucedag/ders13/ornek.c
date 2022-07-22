/*1 ile 50 arasında 5 e tam bölünen sayıları listeleyen program.*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    
    int i;
    for(i=1;i<=50;i++)
    {
        if(i%5 == 0)
        {
            printf("%d\n", i);
        }
    }


    return 0;
}