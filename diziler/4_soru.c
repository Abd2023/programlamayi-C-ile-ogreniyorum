#include<stdio.h>
#include<math.h>
// 11.4
#define N 12
int main()
{
    float birlesmis[N], aDizi[N/2], bDizi[N/2];
    int index=0;
    printf("C dizisinin elemanlerini giriniz : \n");
    for(int i=0; i<N; i++)
        scanf("%f", &birlesmis[i]);
    for(int i=0; i<N; i++)
    {
        aDizi[index] = birlesmis[i];
        i++;
        bDizi[index] = birlesmis[i];
        index++;
    }
    printf("--------------------------\n");
    printf("A dizideki: ");
    for(int i=0; i<N/2; i++)
        printf("%.1f,  ", aDizi[i]);
    printf("\nB dizideki: ");
    for(int i=0; i<N/2; i++)
        printf("%.1f,  ", bDizi[i]);
    return 0;
}
