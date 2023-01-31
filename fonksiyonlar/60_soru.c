#include <stdio.h>
/*
 9.60   190
 */
int bolenlerinToplami(int );
int kontrol(int , int );
int main()
{
    printf("%d", kontrol(220, 284));
    return 0;
}
int bolenlerinToplami(int sayi)
{
    int toplam=0;
    for(int i=1; i<sayi; i++)
    {
        if(sayi%i==0)
        {
            toplam += i;
        }
    }
    return toplam;
}
int kontrol(int sayi1, int sayi2)
{
    if(sayi1==bolenlerinToplami(sayi2))
        return 1;
    else if(bolenlerinToplami(sayi1)==sayi2)
        return 1;
    else 
        return 0;
}
