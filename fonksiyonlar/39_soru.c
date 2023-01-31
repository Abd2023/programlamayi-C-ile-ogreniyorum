#include<stdio.h>
#include<math.h>
#include<time.h>
// 9.39   184
int zarat(int , char);
int sayiTabdil(char );
int main()
{
    printf("\n Ilk cagiriliyor.\n");
    zarat(100, 'B');
    printf("\n Ikinci cagiriliyor.\n");
    zarat(500, 'A');
    return 0;
}
int zarat(int sayi, char harf)
{
    int count=0;
    srand(time(NULL));
    int cop=sayiTabdil(harf);
    for(int i=1; i<=sayi; i++)
    {
        int rastgele=1+rand()%6;
        if(rastgele==cop)
        {
            count++;
        }
    }
    printf("%d\n", count);
}
int sayiTabdil(char harf)
{
    if(harf=='B')
        return 1;
    else if(harf=='K')
        return 2;
    else if(harf=='U')
        return 3;
    else if(harf=='D')
        return 4;
    else if(harf=='E')
        return 5;
    else if(harf=='A')
        return 6;
}
