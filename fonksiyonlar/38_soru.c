#include<stdio.h>
#include<math.h>
#include<time.h>
// 9.38   184
int icindaVarMi(int , int);
int main()
{
    printf("%1d \n", icindaVarMi(54572, 3));
    printf("%1d \n", icindaVarMi(646, 4));
    return 0;
}
int icindaVarMi(int sayi, int num)
{
    int rakam;
    while(sayi!=0)
    {
        rakam=sayi%10;
        sayi /= 10;
        if(rakam==num)
            return 1;
    }
    return 0;
}
