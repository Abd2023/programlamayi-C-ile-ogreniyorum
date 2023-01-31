//9.70         x=11, m=3, x=10   a=7, b=9, x=10   x=12, m=10, x=11   x=11  y=10  
#include<stdio.h>
int x=3;
int module1(int , int );
int module2(int , int );
int main()
{
    int x=7, y=9;
    y=module1(x, y);
    x=module2(x, y);
    printf("x=%d  y=%d \n",x, y);
    return 0;
}
int module2(int x, int m)
{
    static a=10;
    x=a;
    a++;
    printf("x=%d, m=%d, x=%d \n", a, m, x);
    return x;
}
int module1(int a, int b)
{
    x=module2(a, x);
    printf("a=%d, b=%d, x=%d \n",a, b, x);
    return x;
}
