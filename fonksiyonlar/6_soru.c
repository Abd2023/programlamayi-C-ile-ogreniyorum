/* 9.6   176 */
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    float s1 ,a1, s5 ,a5, s25 ,a25, s10 ,a10, tl=1000.85, toplam;
    float gr1, gr2, gr3, gr4;
    
    s1=floor(tl);
    gr1=s1*8.2;
    a1=tl-s1;
    s5=floor(a1/0.5);
    gr2=s5*6.8;
    a5=(a1/0.5)-s5;
    s25=floor(a5/0.25);
    gr3=s25*4;
    a25=(a5/0.25)-s25;
    s10=a25/0.1;
    gr4=s10*3.15;
    toplam= gr1+gr2+gr3+gr4;
    toplam /= 1000;
    printf("%f", toplam);
    return 0;
}
