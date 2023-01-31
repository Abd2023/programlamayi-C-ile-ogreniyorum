#include<stdio.h>
#include<time.h>
// 11.46
int main()
{
    srand(time(NULL));
    int kac_atis=0;
    printf("Toplam kac atis yapilsin ? : ");
    scanf("%d", &kac_atis);
    int rastgele_dizi[kac_atis];
    for(int i; i<kac_atis; i++)
    {
        rastgele_dizi[i]=rand()%10;
        printf("%d. atisinizin rastgele vurdugu halka : %d\n", i+1, rastgele_dizi[i]);
    }
    printf("\n----------------------------------------\n");
    int count=0;
    int max_count=0;
    int max_vurulmus=0;
    int iskalan_sayisi=0;
    for(int i=0; i<kac_atis; i++)
    {
        count=0;
        for (int j=0; j< kac_atis; j++)
        {
            if(rastgele_dizi[i]==rastgele_dizi[j])
            {
                count++;
            }
        }
        if(count>max_count)
        {
            max_count=count;
            if(max_count>1)
                max_vurulmus=rastgele_dizi[i];
        }
        if(rastgele_dizi[i]==0)
            iskalan_sayisi++;
    }
    printf("\nEn cok vurulan halka %d numarali halkadir\n", max_vurulmus);
    printf("Hedef %d defa iskalanmistir", iskalan_sayisi);
    return 0;
}
