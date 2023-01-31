#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/*
9.4------175
*/
float degreeToRadian(float);
float toplamMesafe(float , float, float);
int main()
{
    float ilkHiz=0, aci=0, kalmaSuresi=0;
    printf("Ilk hizi giriniz (m/s) : "); scanf("%f", &ilkHiz);
    printf("Aciyi giriniz (derece) : "); scanf("%f", &aci);
    printf("Havada kalma suresini giriniz (s) : "); scanf("%f", &kalmaSuresi);
    printf("------------------------------------------\n");
    printf("Cisim %.2f m uzaga duser", toplamMesafe(ilkHiz, degreeToRadian(aci), kalmaSuresi));
    return 0;
}
float toplamMesafe(float ilkHiz, float tita, float kalmaSuresi)
{
    return ilkHiz*cos(tita)* kalmaSuresi;
}
float degreeToRadian(float degree)
{
    return degree*M_PI/180;
}
