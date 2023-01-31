#include<stdio.h>
#include<time.h>
// 11.47
int main()
{
    int dizi[10]={53,47,45,40,10,8,7,3,0,0};
    ekleme_fonksiyon(dizi, 10, 36, 4);
    for(int i=0; i<10; i++)
        printf("%d, ", dizi[i]);
    return 0;
}
void ekleme_fonksiyon(int dizi[], int kac_adet, int eklenecek_eleman ,int nereye)
{
    int temp=0;
    for(int i=kac_adet-1; i>=nereye; i--)
    {
        dizi[i]=dizi[i-1];
    }
    dizi[nereye]=eklenecek_eleman;
}
