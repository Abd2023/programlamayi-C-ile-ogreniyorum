#include<stdio.h>
#include<math.h>
#define n 10
// 11.5
int main()
{
    int dizi[n]={4,1,8,8,9,7,6,0,1,5};
    printf("Bu listin en Kucugu : %d", en_kucuk_bul(dizi));
    return 0;
}
int en_kucuk_bul(int dizi[])
{
    int kucukSayi=dizi[0];
    for(int i=0; i<n; i++)
    {
        if(dizi[i]<kucukSayi)
        {
            kucukSayi=dizi[i];
        }
    }
    return kucukSayi;
}
