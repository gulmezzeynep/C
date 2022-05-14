#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //3 sinav ve 1 proje notu girilen öğrencinin ortalaması
    //değer: not1,not2,not3,proje,ortalaması
    //ortalama : (not1+not2+not3+proje)/4

    float not1,not2,not3,proje,ortalama;
    
    printf("sırasıyla sınav notlarınızı ve proje notunuz giriniz: \n");
    
    scanf("%f",&not1);
    scanf("%f",&not2);
    scanf("%f",&not3);
    scanf("%f",&proje);
    
    ortalama=((not1+not2+not3+proje)/4);
    
    printf("1.sınav notu: %f\n2.sınav notu: %f\n3.sınav notu: %f\nProje notu: %f\n",not1,not2,not3,proje);
    
    printf("ORTALAMANIZ: %f", ortalama);
    


    return 0;
}