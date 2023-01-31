#include<stdio.h>
// 11.44
int main()
{
    printf("Onluk sayiyi giriniz : ");
    int sayi;
    scanf("%d", &sayi);
    printf("-------------------------\n");
    int sekizlik_dizi[10]={0};
    int kalan=0;
    printf("Sekizlik karsiligi : ");
    for(int i=9; i>=0; i--)
    {
        kalan = sayi%8;
        sekizlik_dizi[i]=kalan;
        sayi /= 8;
        printf("%d  ", sekizlik_dizi[9-i]);
    }
    return 0;
}
