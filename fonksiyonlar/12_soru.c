#include<stdio.h>
/*
9.12-----177
*/
int asalYaz(int , int);
int asal(int );
int main()
{
    asalYaz(7,21);
	return 0;
}
int asalYaz(int bas, int son)
{
    for(int i=bas; i<=son; i++)
    {
        if(asal(i))
            printf("%d\n", i);
    }
}
int asal(int sayi)
{
    int asali=1;
    for(int i=2; i<sayi; i++)
    {
        if(sayi%i==0)
            asali=0;
    }
    return asali;
}
