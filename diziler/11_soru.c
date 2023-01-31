#include<stdio.h>
#include<math.h>
// 11.11

int main()
{
    int dizi[10];
    for(int i=0; i<10; i++)
    {
        scanf("%d", &dizi[i]);
    }
    int dondurma;
    printf("Dondurman miktarini giriniz : ");
    scanf("%d", &dondurma);
    printf("--------------------------------\n");
    int ayrilacakDizi[dondurma];
    for(int i=0; i<dondurma; i++)
    {
        ayrilacakDizi[i]=dizi[i];
    }
    //int devamIndex=10-dondurma;
    int yeniDizi[10]={0};
    int index=0, index1=0;
    for(int i=dondurma; i<10; i++)
    {
        yeniDizi[index++]=dizi[i];
    }
    for(int i=0; i<dondurma; i++)
        yeniDizi[index++]=ayrilacakDizi[i];
        
    for(int i=0; i<10; i++)
    {
        if(yeniDizi[i]!=0)
            printf("%d,  ", yeniDizi[i]);
    }
   return 0;
}
