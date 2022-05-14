#include <stdio.h>
#include <stdlib.h>
//faktöriyel 
int main(){
    
    int i;
    int faktor=1;
    for ( i=1; i<=6; i++)
    {
        faktor = faktor * i;
    }
    printf("6 sayısının faktoriyel degeri : %d",faktor);

    return 0;
}