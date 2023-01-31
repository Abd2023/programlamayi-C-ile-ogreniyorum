#include<stdio.h>
// 11.42

int main()
{
    int dizi[10];
    printf("Dizinin elemanlarin giriniz : \n");
    for(int i=0; i<10; i++)
        scanf("%d", &dizi[i]);
    printf("-------------------------------\n");
    printf("Dizinin son hali = ");
    eleme(dizi, 10);
    for(int i=0; i<10; i++)
        printf("%d, ", dizi[i]);
   return 0;
}
void eleme(int dizi[], int adet )
{
    for(int i=0; i<adet; i++)
    {
        for(int j=0; j<adet; j++)
        {
            if(i!=j && dizi[i]==dizi[j])
            {
                dizi[i]=-1;
                dizi[j]=-1;
            }
        }
    }
}
