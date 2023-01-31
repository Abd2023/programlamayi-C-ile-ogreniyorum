#include<stdio.h>
/*
9.10-----176
*/
int mukkemelSayi(int );
mukemelSayiYaz(int bas, int son);
int main()
{
    mukemelSayiYaz(1,1000);
	return 0;
}
int mukemelSayiYaz(int bas, int son)
{
    for(int i=bas; i<=son; i++)
    {
        if(mukkemelSayi(i))
            printf("%d\n", i);
    }
}
int mukkemelSayi(int sayi)
{
    int bolenleri=0;
    for(int i=1; i<sayi; i++)
    {
        if(sayi%i==0)
        {
            bolenleri += i;
        }
    }
    if(sayi==bolenleri)
        return 1;
    else
        return 0;
}
