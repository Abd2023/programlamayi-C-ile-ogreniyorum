#include<stdio.h>
#include<math.h>
// 9.25   180
int main()
{
    origineEnYakin(3,3 , 7,7 , 9,9);     //birbirine yakin olan cift fonksiyon
    return 0;
}
int origineEnYakin(int x1, int x2,int y1,int y2,int z1,int z2)
{
    int r1ver2, r2ver3, r1ver3;
    r1ver2=sqrt(pow(x1-y1, 2)+pow(x2-y2, 2));
    r2ver3=sqrt(pow(z1-y1, 2)+pow(z1-y2, 2));
    r1ver3=sqrt(pow(x1-z1, 2)+pow(x1-z2, 2));
    if(r1ver2<r2ver3 && r1ver2<r1ver3)
        printf("Yakin olan cift= (%d , %d) - (%d , %d)", x1, x2, y1, y2);
    if(r2ver3<r1ver2 && r2ver3<r1ver3)
        printf("Yakin olan cift= (%d , %d) - (%d , %d)", y1, y2, z1, z2);
    if(r1ver3<r2ver3 && r1ver3<r1ver2)
        printf("Yakin olan cift= (%d , %d) - (%d , %d)",x1, x2, z1, z2);
}
