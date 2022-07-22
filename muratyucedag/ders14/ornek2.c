//1 - 20 arasındaki cift sayıları lisateleyen ama 14 sayısını listelemeyecek.
#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    i=1;
    while(i<=20)
    {
        if(i%2==0 && i!=14)
        {
            printf("%d \n", i);
        }

        i++;
    }
    
    
    return 0;

}