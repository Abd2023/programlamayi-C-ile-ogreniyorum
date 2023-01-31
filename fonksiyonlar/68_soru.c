#include<stdio.h>
#include<math.h>
//9.68
int rakamKareToplami(int );
int isHappyNumber(int );
int main()
{
    isHappyNumber(49);
    return 0;
}
int isHappyNumber(int sayi)
{
    int a = rakamKareToplami(sayi);

    do
    {
        a=rakamKareToplami(a);
    }while(a>9);
    printf("%d\n", a);
    if(a==1)
        printf("Mutlu Sayi");
    else
        printf("Mutsuz Sayi");
}
int rakamKareToplami(int sayi)
{
    int rakam, rakamKariToplamiDegisken=0;
    while(sayi!=0)
    {
        rakam=sayi%10;
        rakamKariToplamiDegisken += rakam*rakam;
        sayi /= 10;
    }
    return rakamKariToplamiDegisken;
}
