#include<stdio.h>
#include<math.h>
#include<time.h>
// 9.28   181
int main()
{
    bahaneYaz(6);
    return 0;
}
void bahaneYaz(int sayi)
{
    int rastgele;
    srand(time(NULL));
    sayi -= 1;
    for(int i=1; i<=20; i++){      //denemek icin yazdim
        do
        {
            rastgele=rand()%10;
        }while(rastgele == sayi);
        printf("%d   %d\n", rastgele, sayi);
        char arr[10][10]={"amerika", "japonya", "ispanya", "fransa", "rusya", "katar", "almanya", "ingiltere", "cin", "turkiye"};
        printf("Bu isin arkasinda %s vardir\n", arr[rastgele]);
    }
}
