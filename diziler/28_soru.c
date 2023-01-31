//11.28
#include<stdio.h>
int main()
{
    int ogrenci_sayisi;
    do
    {
    printf("Ogrenci sayisini giriniz  : ");
    scanf("%d", &ogrenci_sayisi);
    }while(ogrenci_sayisi>100);
    int dizi[ogrenci_sayisi];
    printf("Ogrenci numaralarini giriniz (5 adet) : ");
    for(int i=0; i<ogrenci_sayisi; i++)
        scanf("%d", &dizi[i]);
    printf("-----------------------------------------\n");
    tek_cift_duzenle(dizi, ogrenci_sayisi);
    return 0;
}
void tek_cift_duzenle(int dizi[], int adet)
{
    int tek[adet],  cift[adet];
    int index1=0, index2=0;
    for(int i=0; i<adet; i++)
    {
        if(dizi[i]%2==0)
        {
            cift[index1++]=dizi[i];
        }
        if(dizi[i]%2==1)
        {
            tek[index2++]=dizi[i];
        }
    }
    for(int i=0, j=0; i<index1 , j<index2; i++, j++)
    {
        //if(tek[i] !=0 || cift[i]!=0)
        printf("%d  %d  ", tek[j], cift[i]);
    }
}
