#include<stdio.h>
#include<math.h>
#define n 30
// 11.9
int gunuBul(float ortalama, float altindegerleri[]);
int main()
{
    float altinDegerleri[n];
    float toplam=0, ortalama;
    for(int i=0; i<n; i++)
    {
        scanf("%f", &altinDegerleri[i]);
        toplam += altinDegerleri[i];
    }
    ortalama=toplam/30;
    printf("Altinin degeri ortalama degerindadn en cok ayin %d. gunuda farklilik gosterilmistir.", gunuBul(ortalama, altinDegerleri));
   return 0;
}

int gunuBul(float ortalama, float altinDegerleri[])
{
    float fark=0, maxFark=0, maxGun=0;
    for(int i=0; i<n; i++)
    {
        fark=fabs(ortalama-altinDegerleri[i]);
        if(fark>maxFark)
        {
        maxFark=fark;
        maxGun=i+1;
         //printf("%f\n", maxGun);
        }
    }
    return maxGun;
}
