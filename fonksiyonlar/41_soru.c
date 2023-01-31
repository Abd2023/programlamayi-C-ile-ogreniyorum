#include<stdio.h>
#include<math.h>
#include<time.h>
// 9.41   186
int paraatTabdil(char);
int paraat(int , char);
int main()
{
    printf("\n Ilk cagiriliyor.\n");
    paraat(500, 'T');
    printf("\n Ikinci cagiriliyor.\n");
    paraat(100, 'Y');
    return 0;
}
int paraat(int sayi, char harf)
{
    int count=0;
    srand(time(NULL));
    int cop=paraatTabdil(harf);
    for(int i=1; i<=sayi; i++)
    {
    int rastgele=1+rand()%2;
    if(rastgele==cop)
        count++;
    }
    printf("%d\n", count);
}
int paraatTabdil(char harf)
{
    if(harf=='T')
        return 1;
    else if(harf=='Y')
        return 2;

}
