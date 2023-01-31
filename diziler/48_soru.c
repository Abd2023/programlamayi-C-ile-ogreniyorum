#include<stdio.h>
#include<time.h>
// 11.48
float ikinci_en_buyuk(float dizi[], int adet);
int main()
{
    float dizi[6]={3.4, 12.5, 1, 5.6 ,7.8 ,9.7};
    float c = ikinci_en_buyuk(dizi, 6);
    printf("Dizinin ikinci en buyugu = %f", c);
    return 0;
}
float ikinci_en_buyuk(float dizi[], int adet)
{
    float buyuk=dizi[0], en_buyuk=dizi[0], temp=0;
    for(int i=0; i<adet; i++)
    {
        if(dizi[i]>en_buyuk)
        {
            buyuk=en_buyuk;
            en_buyuk=dizi[i];
        }
        else if(dizi[i]>buyuk)
        {
            buyuk=dizi[i];
        }
    }
    return buyuk;
}
