#include<stdio.h>
#include<time.h>

// 11.35

int main()
{
    srand(time(NULL));
    int a_dizi[10];
    int b_dizi[5];
    printf("A = ");
    for(int i=0; i<10; i++)
    {
        a_dizi[i]=rand()%100;
        printf("%d,  ", a_dizi[i]);
    }
    printf("\nB = ");
    for(int i=0; i<5; i++)
    {
        scanf("%d", &b_dizi[i]);
    }
    int count =0;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(b_dizi[i]==a_dizi[j]){
                count++;
            }
        }
    }
    if(count==5)
        printf("ise B, A'nin alt kumesi dir");
    else
        printf("ise B, A'nin alt kumesi degil dir");

   return 0;
}
