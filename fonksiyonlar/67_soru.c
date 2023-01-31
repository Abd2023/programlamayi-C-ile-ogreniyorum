#include<stdio.h>
#include<math.h>
//9.67
int dikUcgen(int ,int , int);
int main()
{
    printf("%d\n", dikUcgen(3, 4, 5));
    //printf("%d\n", zincir(32));
    return 0;
}
int dikUcgen(int a, int b, int c)
{
    if(pow(a, 2)+pow(b, 2)==pow(c, 2)){
        //printf("%d\n", pow(a, 2));
        return 1;
    }
    else
        return 0;
}
