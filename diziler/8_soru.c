#include<stdio.h>
#include<math.h>
#define n 5
// 11.8
int main()
{
    float a[n], b[n];
    float ortalama , toplam=0;
    printf("A elemanlari : \n");
    for(int i=0; i<5; i++)
    {
        scanf("%f", &a[i]);
        toplam += a[i];

    }
    printf("B elemanlari : \n");
    for(int i=0; i<n; i++)
    {
        scanf("%f", &b[i]);
        toplam += b[i];
    }
    float birlesmisDizi[n*2];
    int index=0;
    for(int i=0; i<n*2; i++)
    {
        birlesmisDizi[index]=a[i];
        index++;
        birlesmisDizi[index]=b[i];
        index++;
    }
    /*for(int i=0; i<n*2; i++)
        printf("%f  ", birlesmisDizi[i]);
    */
   ortalama=toplam/10 * (1.0);
   //printf("\n%f", toplam);
   //printf("\n%f\n1", ortalama);
    printf("C dizisinin elemanlari : \n" );
    for(int i=0; i<n*2 ;i++)
    {
        if(birlesmisDizi[i]>=ortalama )
                printf("%.1f, ", birlesmisDizi[i]);
    }
   return 0;
}
