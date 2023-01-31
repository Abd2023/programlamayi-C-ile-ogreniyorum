#include<stdio.h>
#include<math.h>
//9.69
int isNarsistNumber(int);
int kacRakam(int );
int main()
{
    printf("%d", isNarsistNumber(54748));
    return 0;
}

int isNarsistNumber(int sayi)
{
    int rakam, cop=0, num;
    num=sayi;
    int sayac=kacRakam(sayi);
    while(sayi!=0)
    {
        rakam=sayi%10;
        cop += pow(rakam, sayac);
        sayi /= 10;
    }
    if(cop==num)
        return 1;
    else
        return 0;
}
int kacRakam(int sayi)
{
    int rakam, sayac=0;
    while(sayi!=0)
    {
        rakam=sayi%10;
        sayi /= 10;
        sayac++;
    }
    return sayac;
}
