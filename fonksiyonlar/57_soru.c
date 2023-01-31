/*
9.57
*/
#include <stdio.h>
int main()
{
    int n1, n2;

    printf("İki tam sayı girin: ");
    scanf("%d %d",&n1,&n2);

    // kullanıcı negatif sayı girerse, sayının işareti pozitif olarak değişir.
    n1 = ( n1 > 0) ? n1 : -n1;
    n2 = ( n2 > 0) ? n2 : -n2;

    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("EBOB = %d",n1);

    return 0;
}
