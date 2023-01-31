#include<stdio.h>
//10.1  /1  202
void deneme1(int );
int main()
{
    int sayi=7;
    deneme1(sayi);
    return 0;
}
void deneme1(int s)
{
    if(s>3)
    {
        printf("%d", s);
        deneme1(s-1);
    }
}
