#include<stdio.h>
#include<math.h>
// 9.24   180
int main()
{
    origineEnYakin(3,3 , 7,7 , 9,9);
    return 0;
}
int origineEnYakin(int x1, int x2,int y1,int y2,int z1,int z2)
{
    int r1, r2, r3;
    r1=sqrt(pow(x1, 2)+pow(x2, 2));
    r2=sqrt(pow(y1, 2)+pow(y2, 2));
    r3=sqrt(pow(z1, 2)+pow(z2, 2));
    if(r1<r2 && r1<r3)
        printf("Yakin olan = (%d , %d)", x1, x2);
    if(r2<r1 && r2<r3)
        printf("Yakin olan = (%d , %d)", y1, y2);
    if(r3<r2 && r3<r1)
        printf("Yakin olan = (%d , %d)", z1, z2);
}
