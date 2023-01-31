#include<stdio.h>
/*
9.11-----176
*/
int main()
{
    printf("%d", asal(12));
	return 0;
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
