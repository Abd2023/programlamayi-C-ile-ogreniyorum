#include<stdio.h>
#include<time.h>
/*
9.20-----179
*/
int islemYaz(char, int);
int main()
{
    islemYaz('/', 1);
	return 0;
}
int islemYaz(char sign, int sayi)
{
    int rastgleSayi1, rastgleSayi2;
    srand(time(NULL));
    if(sign=='/')
    {
    do{
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
    }while(rastgleSayi1%rastgleSayi2!=0);
    }else
    {
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
    }
    if(sign=='*')
    {
        printf("   %d   \n", rastgleSayi1);
        printf("   %d   \n", rastgleSayi2);
        printf("%c      \n",sign);
        printf("-------\n");
        printf("   ?   \n");
    }else
    {
        printf("%d | %d\n", rastgleSayi1, rastgleSayi2);
        printf("   -----\n");
        printf("   |  ?\n");
        printf("---");
    }
}
