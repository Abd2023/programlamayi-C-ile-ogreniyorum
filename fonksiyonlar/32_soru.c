#include<stdio.h>
#include<math.h>
#include<time.h>
// 9.32   183
int faktoriyel(int );
int main()
{
    int n, r;
    printf("n ve r degerlerini giriniz : ");
    scanf("%d%d", &n, &r);
    printf("--------------------------\n");
    printf("P(n, r) = %d", permutasiyon(n, r));
    return 0;
}
int permutasiyon(int n, int r)
{
    int cevap= faktoriyel(n)/faktoriyel(n-r);
    return cevap;
}
int faktoriyel(int sayi)
{
    if(sayi==0)
        return 1;
    return sayi * faktoriyel(sayi-1);
}
