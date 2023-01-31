#include <stdio.h>
//9.61
int obeb(int , int );
int okek(int ,int ,int);
int main()
{
    printf("%d", okek(obeb(24, 32), 24, 32));
    return 0;
}
int okek(int obebDegisken, int sayi1, int sayi2)
{
    return sayi1*sayi2/obebDegisken;
}
int obeb(int sayi1, int sayi2)
{
    int c;
    while (sayi1!=sayi2)
    {
        if(sayi1<sayi2)
        {
            c=sayi2;
            sayi2=sayi1;
            sayi1=c;
        }
        sayi1 -= sayi2;
    }
    return sayi1 ;
}
