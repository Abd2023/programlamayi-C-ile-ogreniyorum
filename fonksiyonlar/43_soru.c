#include<stdio.h>
#include<math.h>
#include<time.h>
// 9.43   186
int sagdanBuyuk(int );
int main()
{
    printf("\n%d", sagdanBuyuk(54572));
    printf("\n%d", sagdanBuyuk(666));
    return 0;
}
int sagdanBuyuk(int sayi)
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
    return sayac;
}
