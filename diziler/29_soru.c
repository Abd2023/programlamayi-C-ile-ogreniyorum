//11.29
//4 1 9 6 1 1 3 5 3 4 14 15 18 10 13
#include<stdio.h>
int main()
{
    int dizi[15];
    printf("Dizinin elemanlari giriniz (15 adet) ");
    for(int i=0; i<15; i++)
    {
        scanf("%d", &dizi[i]);
    }
    printf("Dizinin duzenlenmis hali : ");
    tek_cift_duzenle(dizi, 15);
    return 0;
}
void tek_cift_duzenle(int dizi[],  int adet)
{
    int tek[adet];
    int tek_index=0;
    int cift[adet];
    int cift_index=0;
    for(int i=0; i<adet; i++)
    {
        if(dizi[i]%2==0)
            tek[tek_index++]=dizi[i];
        else
            cift[cift_index++]=dizi[i];
    }
    for(int i=0; i<cift_index; i++)
        printf("%d, ", cift[i]);
    for(int i=0; i<tek_index; i++)
        printf("%d, ", tek[i]);

}
