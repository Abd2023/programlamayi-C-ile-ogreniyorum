#include<stdio.h>
#include<math.h>
#include<time.h>
// 9.47   187
int ortanca(int a, int b, int c);
int main()
{
    printf("\n%d", ortanca(2, 3, 4));
    printf("\n%d", ortanca(45, 23, 99));
    printf("\n%d", ortanca(15 ,100 ,23));
    return 0;
}
int ortanca(int a, int b, int c)
{
    int ortancaDegisken;
    if(a>b && a>c)
    {
        if(b>c)
            ortancaDegisken=b;
        else
            ortancaDegisken=c;
    }else if(b>a && b>c)
    {
        if(a>c)
            ortancaDegisken=a;
        else
            ortancaDegisken=c;
    }else if(c>a && c>b)
    {
        if(a>b)
            ortancaDegisken=a;
        else
            ortancaDegisken=b;
    }
    return ortancaDegisken;
}
