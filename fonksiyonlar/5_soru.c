#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/*
9.5------175
*/
float cevirTl(float, float, float, float);
int main()
{
    float tl_1=0, tl_50=0, tl_25=0, tl_10=0;
    printf("Bozluklarin agirliklarini sirasiyla kg cisindan giriniz \n(Sirasiyla 1 TL, 50 kurus, 25 kurus, 10 kurus) : ");
    scanf("%f%f%f%f", &tl_1, &tl_50, &tl_25, &tl_10);
    printf("-----------------------------------------------------\n");
    printf("Bozukluklarinin toplam ederi = %.2f TL",cevirTl(tl_1*1000, tl_50*1000, tl_25*1000, tl_10*1000));
    return 0;
}
float cevirTl(float tl_1, float tl_50, float tl_25, float tl_10)
{
    float toplam_1, toplam_nim, toplam_nimNim, toplam_onKurus, toplam;
    toplam_1 = tl_1/8.2;
    toplam_nim = (tl_50/6.8)*0.5;
    toplam_nimNim = (tl_25/4)*0.25;
    toplam_onKurus = (tl_10/3.15)*0.10;
    toplam=toplam_1+toplam_nim+toplam_nimNim+toplam_onKurus;
    return toplam;
}
