#include<stdio.h>
#include<math.h>
// 11.3
#define N 6
int main()
{
    int index=0;
    //printf("%d\n", N*2);
    float dizi[N], dizi2[N], buyukDizi[N*2];
    printf("A dizidindeki elemanlari giriniz : \n");
    for(int i=0; i<N; i++)
    {
        scanf("%f", &dizi[i]);
    }
    printf("--------------------\n");
    printf("A dizidindeki elemanlari giriniz : \n");
    for(int i=0; i<N; i++)
    {
        scanf("%f", &dizi2[i]);
    }
    printf("--------------------\n");
    for(int i=0; i<N*2; i++)
    {
        buyukDizi[index++]=dizi[i];
        buyukDizi[index]=dizi2[i];
        index++;
    }

    for(int i=0; i<N*2; i++)
        printf("%.1f,  ", buyukDizi[i]);
    return 0;
}
