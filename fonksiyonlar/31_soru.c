
#include<stdio.h>
#include<math.h>
#include<time.h>
// 9.31   183

int main()
{
     printf("1. satir = %d \n", daireselMi(102564));
     printf("1. satir = %d \n", daireselMi(123456));
    return 0;
}
int daireselMi(int sayi)
{
    int birler=sayi%10;
    int cop=sayi/10;
    int asgal=birler*100000;
    int yeniSayi=cop+asgal;
    if(sayi*birler==yeniSayi)
        return 1;
    else
        return 0;
}
