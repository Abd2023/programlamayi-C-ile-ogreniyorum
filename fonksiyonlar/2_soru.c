#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/*
9.2------174
*/
float toplamSure(float, float);
float degreeToRadian(float);
int main()
{
    float ilkHiz=0, aci=0;
    printf("Ilk hizi giriniz (m/s) : "); scanf("%f", &ilkHiz);
    printf("Aciyi giriniz (derece) : "); scanf("%f", &aci);
    printf("-------------------------------------\n");
    printf("Cisim %.3f saniye sonra yere duser", toplamSure(ilkHiz, degreeToRadian(aci)));
    return 0;
}
float toplamSure(float ilkHiz, float tita)
{
    return 2*ilkHiz*sin(tita)/9.81;
}
float degreeToRadian(float degree)
{
    return degree*M_PI/180;
}
