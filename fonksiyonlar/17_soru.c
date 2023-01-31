#include<stdio.h>
#include<time.h>
/*
9.17-----178
*/
int zamanUret(char harf);
int main()
{
    zamanUret('a');
	return 0;
}
int zamanUret(char harf)
{
    srand(time(NULL));
    int saat, dakika, saniye;
    if(harf=='s')
    {
        saat=8+rand()%3;
        dakika=rand()%60;
        saniye=rand()%60;
    }
    if(harf=='o')    // dogrusu else if
    {
        saat=11+rand()%5;
        dakika=rand()%60;
        saniye=rand()%60;
    }
    if(harf=='a')   //
    {
        saat=16+rand()%8;
        dakika=rand()%60;
        saniye=rand()%60;
    }
    return printf("%d : %d : %d", saat , dakika , saniye);
}
