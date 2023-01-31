#include<stdio.h>
/*
9.14-----177
*/
int buyukSayi(int , int);
int okek(int ,int);
int main()
{
    printf("%d\n", okek(120, 150));
	return 0;
}
int okek(int sayi1, int sayi2)
{
    int okek=0;
    for(int i=buyukSayi(sayi1, sayi2); ; i++)
    {
        if(i%sayi1==0 && i%sayi2==0)
        {
            okek=i;
            break;
        }
    }
    return okek;
}
int buyukSayi(int sayi1, int sayi2)
{
    if(sayi1>sayi2)
        return sayi1;
    else
        return sayi2;
}
