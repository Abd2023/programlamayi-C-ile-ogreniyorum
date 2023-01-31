#include<stdio.h>
#include<time.h>
/*
9.19-----179
*/
int soru(char sign, int sayi);
int main()
{
    soru('-', 3);
	return 0;
}
int soru(char sign, int sayi)
{
    int rastgleSayi1, rastgleSayi2;
    srand(time(NULL));
    if(sayi==1)
    {
        rastgleSayi1=rand()%9;
        rastgleSayi2=rand()%9;
    }
    else if(sayi==2)
    {
        rastgleSayi1=10+rand()%90;
        rastgleSayi2=10+rand()%90;
    }else
    {
        rastgleSayi1=100+rand()%900;
        rastgleSayi2=100+rand()%900;
    }
    if(rastgleSayi1<rastgleSayi2)
    {
        int c=rastgleSayi2;
        rastgleSayi2=rastgleSayi1;
        rastgleSayi1=c;
    }
    printf("   %d   \n", rastgleSayi1);
    printf("   %d   \n", rastgleSayi2);
    printf("%c      \n",sign);
    printf("-------\n");
    printf("   ?   \n");
}
