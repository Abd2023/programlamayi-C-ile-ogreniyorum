#include<stdio.h>
#include<math.h>
#define N 5
//11.15
int main()
{
    int dizi1[N]={4,7,9,6,1};
    int dizi2[N]={8,0,5,3,4};
    int toplamDizi[N];
    int toplam=0;
    for(int i=0; i<N; i++)
    {
        toplam=dizi1[i]+dizi2[i];
        toplamDizi[i]=toplam;
    }
    for(int i=0; i<N; i++)
    {
        printf("%d,  ", toplamDizi[i]);
    }
    return 0;
}
