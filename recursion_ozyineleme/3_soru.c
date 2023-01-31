#include<stdio.h>
//10.3    203
int ikiliye(int );
int main()
{
    printf("%d", ikiliye(10));
    return 0;
}
int ikiliye(int sayi)
{
    if(sayi==0)
        return 0;
    else
    {
        return sayi%2 + 10*(ikiliye(sayi/2));
    }
}
