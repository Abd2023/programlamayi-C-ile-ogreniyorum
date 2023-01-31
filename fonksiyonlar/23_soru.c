#include<stdio.h>
#include<time.h>
#include<math.h>
/*
9.23-----180
*/
int ayristir(int saniye);
int main()
{
    ayristir(64545);
	return 0;
}
int ayristir(int saniye)
{
    int saat, dakika, second;
    saat=saniye/3600;
    dakika=(saniye-saat*3600)/60;
    second=saniye-saat*3600-dakika*60;
    printf("%d : %d : %d", saat, dakika, second);
}
