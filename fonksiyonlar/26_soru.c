#include<stdio.h>
#include<math.h>
#include<time.h>
// 9.26   181
int main()
{
    ertelemeMesajiYaz(7);
    return 0;
}
void ertelemeMesajiYaz(int ay)
{
    srand(time(NULL));
    int rastgele;
    for(int i=1; i<=25; i++){     //denemek icin yazdim
        do
        {
            rastgele=1+rand()%4;
        }while(rastgele == mevsimBilirtici(ay));
        if(rastgele==1)
            printf("Kisin \t tatile gidecez\n");
        else if(rastgele==2)
            printf("ilk Bahar \t tatile gidecez\n");
        else if(rastgele==3)
            printf("Yazin \t tatile gidecez\n");
        else if(rastgele==4)
            printf("Son Bahar \t tatile gidecez\n");
    }
    }
int mevsimBilirtici(int ay)
{
    if(ay==12 || ay==1 || ay==2)
        return 1;
    else if(ay==3 || ay==4 || ay==5)
        return 2;
    else if(ay==6 || ay==7 || ay==8)
        return 3;
    else
        return 4;
}
