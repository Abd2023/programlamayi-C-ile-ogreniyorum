#include<stdio.h>
// 11.38
int main()
{
    char dizi1[6]={'a','n','k','a','r','a'};
    char dizi2[3]={'k','a','r'};
    int c=icinde_var_mi(dizi1, 6, dizi2, 3);
    printf("sonuc  = %d", c);
   return 0;
}
int icinde_var_mi(char dizi1[], int adet1, char dizi2[], int adet2)
{
    int evet=0;
    for(int i=0; i<6; i++)
    {
        if(dizi2[0]==dizi1[i] && dizi2[1]==dizi1[i+1] && dizi2[2]==dizi1[i+2])
            evet=1;
    }
    return evet;
}
