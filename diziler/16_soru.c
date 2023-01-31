#include<stdio.h>
#include<math.h>
#include<time.h>
//11.16
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
    int temp=0;
    printf("\nDizinin Siralnmis Hali : ");
    int niyaz;
    int elemanSayiKopy;
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
    
    
    for(int i=0; i<elemanSayi; i++)
    {
        printf("%d, ", rastgeleDizi[i]);
    }
    float ortanca;
    if(elemanSayi%2==1)
    {
        ortanca = rastgeleDizi[(elemanSayi+1)/2-1];
    }
    else
        ortanca = (rastgeleDizi[(elemanSayi)/2-1]*(1.0) + rastgeleDizi[(elemanSayi)/2])/2*(1.0);
    printf("\nOrtanca : %.1f", ortanca);
    return 0;
}
