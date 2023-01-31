//11.23
#include<stdio.h>
#include<float.h>
#include<math.h>
//1.94 1.87 1.74 1.89 2.05 1.66 1.97 2.00 1.07 1.99
int main()
{
    int bilye_sayisi=0;
    do
    {
        printf("kac adet bilye capi gireceksiniz : ");
        scanf("%d", &bilye_sayisi);
        if(bilye_sayisi>50)
            printf("Yanlis!! En fazla 50 girebilirsiniz\n");
    }while(bilye_sayisi > 50);
    float dizi[bilye_sayisi];
    printf("%d adet cap giriniz : \n", bilye_sayisi);
    for(int i=0; i<bilye_sayisi; i++)
        scanf("%f", &dizi[i]);
    printf("----------------------------------------------\n");
    float small_num=dizi[0], big_num=dizi[0];
    float small_index=0, big_index=0;
    for(int i=0; i<bilye_sayisi; i++)
    {
        if(dizi[i]<small_num)
        {
            small_num=dizi[i];
            small_index=i+1;
        }
        if(dizi[i]>big_num)
        {
            big_num=dizi[i];
            big_index=i+1;
        }
    }
    printf("big number :  %f\n small number : %f \n big index : %f \n small index : %f\n", big_num, small_num, big_index, small_index);
    printf("En buyuk ile en kucuk arasinda %.0f adet bilye vardir. ", fabs(big_index-small_index)-1);
    return 0;
}
