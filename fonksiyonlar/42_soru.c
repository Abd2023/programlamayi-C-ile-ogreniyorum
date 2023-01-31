#include<stdio.h>
#include<math.h>
#include<time.h>
// 9.43   186
int paraatTabdil(char);
int paraat(int , char);
int main()
{
    buyukTarih(12, 12, 2004, 22, 12, 2004);
    printf("\n---------------------------\n");
    buyukTarih(20, 01, 2005, 22, 12, 2004);
    return 0;
}
int buyukTarih(int gun1, int ay1,int yil1, int gun2, int ay2, int yil2)
{
    int maxYil, maxAy, maxGun;
    if(yil1>yil2)
    {
        maxYil=yil1;
        maxAy=ay1;
        maxGun=gun1;
    }else if(yil1<yil2)
    {
        maxYil=yil2;
        maxAy=ay2;
        maxGun=gun2;
    }else
    {
        if(ay1>ay2)
        {
            maxYil=yil1;
            maxAy=ay1;
            maxGun=gun1;
        }else if(ay1<ay2)
        {
            maxYil=yil2;
            maxAy=ay2;
            maxGun=gun2;
        }else
        {
            if(gun1>gun2)
            {
                maxYil=yil1;
                maxAy=ay1;
                maxGun=gun1;
            }
            else
            {
                maxYil=yil2;
                maxAy=ay2;
                maxGun=gun2;
            }
        }
    }
    printf("%02d / %02d / %02d\n", maxGun, maxAy, maxYil);
}
