#include<stdio.h>
// 11.36
int main()
{
    int dizi[10]={4,5,6,2,3,1,8,9,2,10};
    int ters_dizi[10];
    for(int i=0; i<10; i++)
    {
        ters_dizi[9-i]=dizi[i];
    }
    for(int i=0; i<10;i++)
        printf("%d  ", ters_dizi[i]);
   return 0;
}
