#include<stdio.h>
#include<math.h>
#include<time.h>
// 9.33   183
float farenhaytToCatigrad(float);
float cantigradToFarenhayt(float);
int main()
{
    float sayi;
    char tur;
    printf("sayi ve turunu giriniz (C=cantigrad ve F=farenhayt) : ");
    scanf("%f %c", &sayi, &tur);
    printf("%c\n", tur);
    if(tur=='F')
        printf("%.2f", farenhaytToCatigrad(sayi));
    else
        printf("%.2f", cantigradToFarenhayt(sayi));
    return 0;
}
float farenhaytToCatigrad(float sayi)
{
    return (sayi-32)/180*100;
}
float cantigradToFarenhayt(float sayi)
{
    return (sayi*180/100)+32;
}
