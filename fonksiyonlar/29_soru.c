
#include<stdio.h>
#include<math.h>
#include<time.h>
// 9.29   182
int main()
{
    ertelemeMesajiYaz(6);
    return 0;
}
void ertelemeMesajiYaz(int sayi)
{
    int rastgele;
    srand(time(NULL));
    sayi -= 1;
    for(int i=1; i<=20; i++){
        do
        {
            rastgele=rand()%7;
        }while(rastgele == sayi);
        printf("%d   %d\n", rastgele, sayi);
        char arr[10][10]={"pazar", "pazartesi", "sali", "carsamba", "persembe", "cuma", "cumaresi"};
        printf("%s gunu teslimat yapilacaktir\n", arr[rastgele]);
    }
}
