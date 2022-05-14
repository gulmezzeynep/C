#include <stdio.h>
#include <stdlib.h>
//tribonacci serisisin istenilen ilk kaç sayıada elemanını yazdıran program.
int main(){

    int a,b,c,d,i,adim;
    
    a=0;
    b=1;
    c=1;
    
    printf("ilk kaç elemanı yazdırmak istersiniz: ");
    scanf("%d",&adim);
    
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    
    for(i=1 ; i<=adim-3 ; i++)//adim-3 yaptım çünkü ilk 3 elemanı döngüye girmeden yazdırıyoruz.
    {
        d = a+b+c;
        printf("%d\n",d);
        a=b;
        b=c;
        c=d; 
    }

    return 0;
}