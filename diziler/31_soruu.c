#include <stdio.h>
#include<time.h>
//11.31
int main() {
    int dizi[5]={12,11,10,8,9};
    for(int i=0; i<5; i++)
    {
        printf("%d, ", dizi[i]);
    }
    karistir(dizi, 5);
    printf("\n-----------------------\n");
    for(int i=0; i<5; i++)
        printf("%d, ", dizi[i]);
    return 0;
}
void karistir(int dizi[], int adet)
{
    srand(time(NULL));
    int rastgele_dizi[adet];
    int rastgele_sayi=0;
    int temp=0;
    for(int i=0; i<adet; i++)
    {
        rastgele_sayi = rand()%adet;
        temp=dizi[i];
        dizi[i]=dizi[rastgele_sayi];
        dizi[rastgele_sayi]=temp;
    }
}
