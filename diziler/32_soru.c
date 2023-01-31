#include <stdio.h>
#include<math.h>
//11.32
void onluk_yap(int dizi[] , int adet);
int main() {
    int sekizlik_dizi[10];
    printf("Sekizlik sayinin rakamlarini giriniz : ");
    for(int i=0; i<10; i++)
    {
        scanf("%d", &sekizlik_dizi[i]);
    }
    printf("-------------------------------------\n");
    onluk_yap(sekizlik_dizi, 10);
    return 0;
}
void onluk_yap(int dizi[] , int adet)
{
    int toplam=0;
    for(int i=0, j=9; i<10, j>=0; i++, j--)
    {
        toplam += dizi[i]*pow(8, j);
    }
    printf("Onluk karsiligi = %d", toplam);
}
