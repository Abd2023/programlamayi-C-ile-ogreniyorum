#include<stdio.h>
#include<math.h>
// 11.1 
int main()
{
    int kacTane=0, dizi[6];
    for(int i=0; i<6; i++)
    {
        scanf("%d", &dizi [i]);
    }
    printf("-------------------\n");
    for(int i=0; i<6; i++)
    {
        printf("%d     ", dizi[i]);
        for(int j=0; j<dizi[i]; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}
