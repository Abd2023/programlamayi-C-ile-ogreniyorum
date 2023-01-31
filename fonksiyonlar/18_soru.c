#include<stdio.h>
#include<time.h>
/*
9.18-----178
*/
int tarihUret(int sayi, char harf);
int main()
{
    tarihUret(5, 'i');
	return 0;
}
int tarihUret(int sayi, char harf)
{
    srand(time(NULL));
    int ay, gun, sene;
    for(int i=1; i<=sayi; i++)
    {
        sene=2022+rand()%51;
        gun=1+rand()%30;
        if(harf=='s')
            ay=9+rand()%3;
        else
            ay=3+rand()%3;
        printf("%d / %d / %d\n", gun, ay, sene);
    }
}
