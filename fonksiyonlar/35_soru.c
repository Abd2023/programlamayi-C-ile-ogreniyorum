#include<stdio.h>
#include<math.h>
#include<time.h>
// 9.35   184
int main()
{
    int c= alanbul(-2,3 , 2,-2);
    printf("%d", c);
    return 0;
}
int alanbul(int x1,int y1,int x2,int y2)
{
    return fabs(x1-x2)*fabs(y1-y2);
}
