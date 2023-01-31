#include<stdio.h>
#include<math.h>
#include<time.h>
//11.20
int main()
{
    int rastgeleDizi[50];
    int elemanSayi=0;
    printf("Eleman Sayisini Giriniz : ");
    scanf("%d", &elemanSayi);
    srand(time(NULL));
    for(int i=0; i<elemanSayi; i++)
    {
        rastgeleDizi[i]= 1 + rand()%100;
    }
    printf("Otomatik olusturan dizi : ");
    for(int i=0; i<elemanSayi; i++)
    {
        printf("%d, ", rastgeleDizi[i]);
    }
    int rastgeleDiziKopy[elemanSayi];
    for(int i=0; i<elemanSayi; i++)
        rastgeleDiziKopy[i]=rastgeleDizi[i];
    int temp=0;
    int niyaz;
    int elemanSayiKopy={0};
    elemanSayiKopy=elemanSayi;
    do
    {
        niyaz=0;
        for(int i=0; i<elemanSayiKopy; i++)
         {
             if(rastgeleDizi[i]>rastgeleDizi[i+1])
             {
                 temp=rastgeleDizi[i];
                 rastgeleDizi[i]=rastgeleDizi[i+1];
                 rastgeleDizi[i+1]=temp;
                 niyaz=1;
             }
         }
         elemanSayiKopy--;
    } while (niyaz!=0);
    printf("\nDizinin Siralnmis Hali : ");
    for(int i=0; i<elemanSayi; i++)
        printf("%d, ", rastgeleDizi[i]);
    int count=0;
    int ilkCeyrekIndex=(elemanSayi+1)/4;
    printf("\nilk ceyrek degeri (%d. siradeki) : %d", ilkCeyrekIndex, rastgeleDizi[ilkCeyrekIndex-1]);    
    
    return 0;
}
