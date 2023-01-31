#include<stdio.h>
#include<math.h>
#include<time.h>
// 9.36   184
float kombinasiyon(float , float);
float faktoriyel(float);
int main()
{
    printf("%.1f", kombinasiyon(15, 11));
    return 0;
}
float kombinasiyon(float n, float r)
{
    float pay = faktoriyel(n);
    float payda = faktoriyel(n-r)*faktoriyel(r);
    return pay/payda;
}
float faktoriyel(float num)
{
    if(num==1)
        return 1;
    return num*faktoriyel(num-1);

}
