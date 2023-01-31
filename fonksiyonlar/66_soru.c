#include<stdio.h>
#include<math.h>
//9.66
int zincir(int );
int tersYapma(int );
int main()
{
    printf("%d\n", zincir(19));
    printf("%d\n", zincir(32));
    return 0;
}

int zincir(int sayi)
{
    int cop=0, count=0;
    do
    {
        sayi=abs(sayi-tersYapma(sayi));
        count++;
    }while(sayi>10);
    return count+1;
}

int tersYapma(int sayi)
{
    int rakam=0, ters=0;
    while (sayi!=0)
    {
        rakam=sayi%10;
        ters = ters*10 + rakam;
        sayi /= 10;
    }
    return ters;
}
