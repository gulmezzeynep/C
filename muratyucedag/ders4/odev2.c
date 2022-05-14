#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //uçaklarda bagaj ve el kg hesabı üzerinden ödeme yapılması.
    //değer : bagaj,el,ödeme
    //ödeme :((bagaj-15)+(el-8))*5

    int bagaj,el,odeme;
   

    printf("Bagaj ağırlığınız: ");
    scanf("%d",&bagaj);

    printf("\n");

    printf("El bagajı ağırlığı: ");
    scanf("%d",&el);

    printf("\n");
    
    odeme = (((bagaj-15)+(el-8))*5);
    printf("YAPMANIZ GEREKEN ÖDEME MİKTARI: %d",odeme);


    return 0;
}