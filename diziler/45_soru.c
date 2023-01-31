#include<stdio.h>
#include<math.h>
// 11.45
int main()
{
    int dizi[6]={1,0,0,1,0,1};
    int toplam=0;
    for(int i=5; i>=0; i--)
    {
        toplam += dizi[i]*pow(2, 5-i);
    }
    printf("%d", toplam);
    return 0;
}
