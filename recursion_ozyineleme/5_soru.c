#include<stdio.h>
//10.5    204
int obeb(int , int );
int main()
{
    printf("%d", obeb(192, 72));
    return 0;
}
int obeb(int sayi1, int sayi2)
{
    int cop=0;
    cop=sayi2;
    if(sayi1%sayi2==0)
        return sayi2;
    else
    {
        sayi2 = sayi1%sayi2;
        sayi1 = cop;
        return obeb(sayi1,sayi2);
    }
}
