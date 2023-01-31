
#include<stdio.h>
#include<math.h>
#include<time.h>
// 9.37   184
int tersCevir(int);
int main()
{
    printf("%1d \n", tersCevir(123));
    printf("%1d \n", tersCevir(123456));
    return 0;
}
int tersCevir(int sayi)
{
    int rakam, sonuc=0;
    while(sayi!=0)
    {
        rakam=sayi%10;
        sayi /= 10;
        sonuc=sonuc*10+rakam;
    }
    return sonuc;
}
