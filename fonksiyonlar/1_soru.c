#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/*
9.1------174
*/
float cekimKuvveti(float, float, float);
int main()
{
    float radius, m1, m2;
    printf("Cisimlerin agirligini giriniz   (kg)   : "); scanf("%f%f", &m1, &m2);
    printf("Aralarindaki uzakligi giriniz   (m)    : "); scanf("%f", &radius);
    printf("-------------------------------------------\n");
    printf("Cekim kuvveti = %.2f.10^-11",cekimKuvveti(m1, m2, radius));
    return 0;
}
float cekimKuvveti(float m1, float m2, float radius)
{
    float cekimKuvvetiDegisken;
    cekimKuvvetiDegisken = (6.673*m1*m2)/(radius*radius);
    return cekimKuvvetiDegisken;
}
