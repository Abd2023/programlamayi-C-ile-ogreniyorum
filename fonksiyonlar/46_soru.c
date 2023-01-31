#include<stdio.h>
#include<math.h>
#include<time.h>
// 9.46   187
int en_buyuk(int a, int b, int c);
int en_kucuk(int a, int b, int c);
int main()
{
    printf("\n%d", en_buyuk(2, 3, 4));
    printf("\n%d", en_kucuk(2, 3, 4));
    return 0;
}
int en_buyuk(int a, int b, int c)
{
    int maxNum;
    if(a>b && a>c)
        maxNum=a;
    else if(b>a && b>c)
        maxNum=b;
    else
        maxNum=c;
    return maxNum;
}
int en_kucuk(int a, int b, int c)
{
    int minNum;
    if(a<b && a<c)
        minNum=a;
    else if(b<a && b<c)
        minNum=b;
    else
        minNum=c;
    return minNum;
}
