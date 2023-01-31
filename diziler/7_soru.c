
#include<stdio.h>
#include<math.h>
#define n 10
// 11.7
int main()
{
    int aIndexi=0, bIndexi=0;
    float dizi[n];
    float kucukOlanlar[n]={0}, buyukOlanlar[n]={0};
    float ortalma, toplam=0;
    for(int i=0; i<n; i++)
    {
        scanf("%f", &dizi[i]);
        toplam += dizi[i];
    }
    ortalma=toplam/n;
    printf("ORTALAMA : %.2f\n", ortalma);
    for(int i=0; i<n; i++)
    {
        if(dizi[i]<ortalma)
            kucukOlanlar[aIndexi++]=dizi[i];
        else
            buyukOlanlar[bIndexi++]=dizi[i];
    }
    printf("A dizisindeki : \n");
    for(int i=0; i<sizeof(kucukOlanlar)/sizeof(kucukOlanlar[0]); i++)
    {
        if(kucukOlanlar[i]!=0)
            printf("%.1f  ", kucukOlanlar[i]);
    }

    printf("\nA dizisindeki : \n");
    for(int i=0; i<sizeof(buyukOlanlar)/sizeof(buyukOlanlar[0]); i++)
        if(buyukOlanlar[i]!=0)
            printf("%.1f  ", buyukOlanlar[i]);

    return 0;
}
