//11.27
//1.64 1.87 1.74 1.89 2.05 1.66 1.97 2.00 1.79 1.99 1.56 1.73
#include<stdio.h>
int main()
{
    printf("Oyuncularin boylarini giriniz : \n");
    float oyuncu_boylari[12];
    for(int i=0; i<12; i++)
    {
        scanf("%f", &oyuncu_boylari[i]);
    }
    printf("Bir kisa ve bir uzun olarak saralanmis hali :\n");
    birKisaBirUzun(oyuncu_boylari, 12);
    return 0;
}
void birKisaBirUzun(float dizi[], int adet)
{
    float temp;
    int swap =0;
    do
    {
        swap=0;
        for(int i=0; i<12-1; i++)
        {
            if(dizi[i]>dizi[i+1])
            {
                temp=dizi[i+1];
                dizi[i+1]=dizi[i];
                dizi[i]=temp;
                swap=1;
            }
        }
    }while(swap==1);
    /*for(int i=0; i<12; i++)
        printf("%.2f  ", dizi[i]);
        */
    for(int i=0, j=11; i<6, j>5; i++, j--)
    {
        printf("%.2f  %.2f  ", dizi[i], dizi[j]);
    }
}
