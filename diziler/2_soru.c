#include<stdio.h>
#include<math.h>
// 11.2
int main()
{
    int dizi[5], dizi2[5], buyukDizi[10], index=0;
    printf("A dizidindeki elemanlari giriniz : \n");
    for(int i=0; i<5; i++)
    {
        scanf("%d", &dizi[i]);
    }
    printf("--------------------\n");
    printf("B dizidindeki elemanlari giriniz : \n");
    for(int i=0; i<5; i++)
    {
        scanf("%d", &dizi2[i]);
    }
    printf("--------------------\n");
    for(int i=0; i<5; i++)
    {
        buyukDizi[index++]=dizi[i];
    }
    for(int i=0; i<5; i++)
    {
        buyukDizi[index++]=dizi2[i];
    }
    for(int i=0; i<10; i++)
        printf("%d, ", buyukDizi[i]);
    return 0;
}
