#include <stdio.h>
//9.64
int isSuperPrime(int );
int asal(int );
int main()
{
    printf("%d\n", isSuperPrime(19001));
    printf("%d\n", isSuperPrime(13));
    return 0;
}
int isSuperPrime(int sayi)
{   
    int rakam, toplam=0;
    while (sayi>10)
    {
        while (sayi!=0)
        {
            rakam=sayi%10;
            toplam += rakam;
            sayi /= 10;
        }
        sayi=toplam;
        if(asal(sayi)==1)
            return 1;
        else
            return 0;
    }
}
int asal(int sayi)
{
    for(int i=2; i<sayi; i++)
    {
        if(sayi%i==0)
            return 0;
    }
    return 1;
}
