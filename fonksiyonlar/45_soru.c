#include<stdio.h>
#include<math.h>
#include<time.h>
// 9.45   186
int enBuyuk(int );
int main()
{
    printf("\n%d", enBuyuk(54571));
    printf("\n%d", enBuyuk(33));
    return 0;
}
int enBuyuk(int sayi)
{
    int rakam, maxRakam=0, sayac=0;
    while(sayi!=0)
    {
        rakam=sayi%10;
        if(rakam>maxRakam)
        {
            maxRakam=rakam;
            sayac += 1;
        }
        sayi /= 10;
    }
    return maxRakam;
}
