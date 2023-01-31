#include<stdio.h>
// 10.1  /2  203
void deneme2(int );
int main()
{
    int sayi=7;
    deneme2(sayi);
    return 0;
}
void deneme2(int s)
{
    if(s>3)
    {
        deneme2(s-1);
        printf("%d", s);
    }
}
