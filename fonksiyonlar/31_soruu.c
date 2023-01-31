#include<stdio.h>
#include<math.h>
#include<time.h>
// 9.31   183

int main()
{
     printf("1. satir = %d \n", daireselMi(102564));
     printf("2. satir = %d \n", daireselMi(12345));
    return 0;
}
int daireselMi(int sayi)
{

    int sayac, num, num1, kacalo;
    kacalo=sayi;
    num=sayi;
    num1=sayi;
    num1=num1%10;
    num /=10;
    //printf("%d\n", num);
    while(sayi!=0)
    {
        sayi /= 10;
        sayac += 1;
    }
    int gosale = num1*pow(10, sayac-1) + num;
    if(gosale==kacalo*num1)
        return 1;
    else
        return 0;
}
