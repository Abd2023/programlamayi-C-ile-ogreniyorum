#include<stdio.h>
#include<math.h>
#include<time.h>
// 9.34   184
int main()
{
    printf("%d", kuvvet(3, 4));
    return 0;
}
int kuvvet(int taban, int ust)
{
    int sonuc=1;
    for(int i=1;  i<=ust; i++)
    {
        sonuc *= taban;
    }
    return sonuc;
}
