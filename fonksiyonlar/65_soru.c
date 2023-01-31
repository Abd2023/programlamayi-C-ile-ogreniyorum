#include <stdio.h>
//9.65
int harshadInRange(int , int);
int harshadSay(int );
int main()
{
    printf("%d\n", harshadInRange(121, 141));
    printf("%d\n", harshadInRange(21, 41));
    return 0;
}
int harshadInRange(int bas, int bit)
{
    int count=0;
    for(int i=bas; i<=bit; i++)
    {
        if(harshadSay(i))
            count++;
    }
    return count;
}
int harshadSay(int sayi)
{
    int rakam, toplam=0, num;
    num=sayi;
    while (sayi!=0)
    {
        rakam=sayi%10;
        toplam += rakam;
        sayi /= 10;
    }
    if(num%toplam==0)
        return 1;
    else 
        return 0;
}
