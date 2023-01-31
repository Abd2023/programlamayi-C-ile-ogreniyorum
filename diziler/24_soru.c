//11.24
#include<stdio.h>
#include<float.h>
#include<math.h>
int main()
{
    int personel_sayisi=0;
    do
    {
        printf("personel sayisini gireceksiniz : ");
        scanf("%d", &personel_sayisi);
        if(personel_sayisi>50)
            printf("Yanlis!! En fazla 50 girebilirsiniz\n");
    }while(personel_sayisi > 50);
    int personel_sicili[personel_sayisi];
    int satis_miktari[personel_sayisi];
    for(int i=1; i<=personel_sayisi; i++)
    {
        printf("%d. personelin sicili ve satis miktari : ", i);
        scanf("%d%d", &personel_sicili[i-1], &satis_miktari[i-1]);
    }
    printf("---------------------------------------------\n");
    printf("personel ne kadar satis yapacak \n");
    int max_satis_miktari=satis_miktari[0];
    for(int i=0; i<personel_sayisi; i++)
    {
        if(satis_miktari[i]>max_satis_miktari)
        {
            max_satis_miktari=satis_miktari[i];
        }
    }
    printf("Sicil : ");
    for(int i=0; i<personel_sayisi; i++)
    {
        printf("%d  ", personel_sicili[i]);
    }
    printf("\nihtiyac : ");
    for(int i=0; i<personel_sayisi; i++)
    {
        printf("%d  ", abs(satis_miktari[i]-max_satis_miktari));
    }
    return 0;
}
