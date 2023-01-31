#include<stdio.h>
#include<math.h>
#include<time.h>
// 9.48   187
int ciftrakamsayi(int );

int main()
{
    printf("\n%d", ciftrakamsayi(545222271));
    printf("\n%d", ciftrakamsayi(323));
    return 0;
}

int ciftrakamsayi(int sayi)
{
    int rakam, sayac=0;
    while(sayi!=0)
    {
        rakam=sayi%10;
        if(rakam%2==0)
        {
            sayac += 1;
        }
        sayi /= 10;
    }
    return sayac;
}
