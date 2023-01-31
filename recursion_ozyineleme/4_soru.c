#include<stdio.h>
//10.4    204
int toplamUcret(int );
int dongu(int );
int main()
{
    printf("%d", dongu(4));
    return 0;
}
int toplamUcret(int gun)
{
    int toplam=0;
    if(gun==1)
        return 3;
    else
    {
        return toplamUcret(gun-1)*2 ;
    }
}
int dongu(int hangi)
{
    int sonuc=0;
    for(int i=1; i<=hangi; i++)
    {
        sonuc += toplamUcret(i);
    }
    return sonuc;
}
