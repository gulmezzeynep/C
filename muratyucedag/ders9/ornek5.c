#include <stdio.h>
#include <stdlib.h>

int main(){

    //klavyeden girile dereceye göe suyun maddi halini yazdıran programı yazdırın.

    printf("****** SUUYUN DURUMU ********\n\n");

    int su;
    printf("Sicaklik degerini girin: ");
    scanf("%d",&su);

    if(su<=0)
    {
        printf("Su buz halinde");
    }
    if (su > 0 && su < 100)
    {
        printf("Su sıvı halinde");
    }
    if (su>=100)
    {
        printf("Su gaz halinde");
    }
    
    return 0;
}