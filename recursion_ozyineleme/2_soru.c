#include<stdio.h>
#include<math.h>
// 10.2    203
int exponet(int ,int);
int main()
{
    printf("%d", exponet(3, 2));
    return 0;
}
int exponet(int taban, int ust)
{
    if(ust==1)
        return taban;
    else
        return taban*exponet(taban, ust-1);
}
