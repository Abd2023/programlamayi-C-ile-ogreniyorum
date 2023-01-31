#include<stdio.h>
#include<math.h>
#include<time.h>
// 9.27   181
int main()
{
    renkMesajiYaz(2);
    return 0;
}
void renkMesajiYaz(int sayi)
{
    int rastgele;
    srand(time(NULL));
    for(int i=1; i<=10; i++){     //denemek icin yazdim
        do
        {
            rastgele=rand()%10;
        }while(rastgele == sayi);
        char arr[10][10]={"siyah", "kahve rangi", "kirmizi", "turuncu", "sari", "yesil", "mavi", "mor", "Gri", "beyaz"};
        printf("Hic begenmedim!\n%s boyayin\n", arr[rastgele]);
    }
}
