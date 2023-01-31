#include<stdio.h>
#include<math.h>
#define n 10
// 11.6
int main()
{
    int dizi[n];
    float ortalma, toplam=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &dizi[i]);
        toplam += dizi[i];
    }
    //printf("%d\n", toplam);
    ortalma=toplam/n*1.0;
    printf("%.2f", ortalma);
    for(int i=0; i<n; i++)
    {
        if(dizi[i]<ortalma)
            printf("\n%d  ", dizi[i]);
    }

    return 0;
}
