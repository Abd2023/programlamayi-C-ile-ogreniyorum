//11.25
#include<stdio.h>
#include<float.h>
#include<math.h>
int main()
{
    int il_sayisi=0;
    do
    {
        printf("il sayisini gireceksiniz : ");
        scanf("%d", &il_sayisi);
        if(il_sayisi>50)
            printf("Yanlis!! En fazla 50 girebilirsiniz\n");
    }while(il_sayisi > 50);
    int ilin_plakasi[il_sayisi];
    int destek_miktari[il_sayisi];
    for(int i=1; i<=il_sayisi; i++)
    {
        printf("%d. ilin plakasi ve destek miktari : ", i);
        scanf("%d%d", &ilin_plakasi[i-1], &destek_miktari[i-1]);
    }
    printf("---------------------------------------------\n");
    printf("En az destek alan ile gore, illerin fazlalari \n");
    int min_destek_miktari=destek_miktari[0];
    for(int i=0; i<il_sayisi; i++)
    {
        if(destek_miktari[i]<min_destek_miktari)
        {
            min_destek_miktari=destek_miktari[i];
        }
    }
    printf("il : ");
    for(int i=0; i<il_sayisi; i++)
    {
        printf("%d  ", ilin_plakasi[i]);
    }
    printf("\nfazla : ");
    for(int i=0; i<il_sayisi; i++)
    {
        printf("%d  ", abs(destek_miktari[i]-min_destek_miktari));
    }
    return 0;
}
