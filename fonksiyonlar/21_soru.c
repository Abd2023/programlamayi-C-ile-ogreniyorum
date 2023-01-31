#include<stdio.h>
#include<time.h>
/*
9.21-----179
*/

int main()
{
    printf("%d", obeb(120, 150));
	return 0;
}
int obeb(int sayi1, int sayi2)
{
    int obebler;
    kucukSayi(sayi1, sayi2);
    for(int i=sayi2; i>0; i--)
    {
        if(sayi1%i==0 && sayi2%i==0)
        {
            obebler=i;
            break;
        }
    }
    return obebler;
}

int kucukSayi(int sayi1, int sayi2)
{
    if(sayi1<sayi2)
    {
        int temp=sayi2;
        sayi2=sayi1;
        sayi1=temp;
    }
    return sayi1, sayi2;
}
