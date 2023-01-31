#include<stdio.h>
// 11.37
int main()
{
    int dizi1[7]={3,12,1,12,7,3,12};
    int dizi2[3]={12,7,3};
    int c=icinde_var_mi(dizi1, 7, dizi2, 3);
    printf("sonuc  = %d", c);
   return 0;
}
int icinde_var_mi(int dizi1[], int adet1, int dizi2[], int adet2)
{
    int evet=0;
    for(int i=0; i<7; i++)
    {
        if(dizi2[0]==dizi1[i] && dizi2[1]==dizi1[i+1] && dizi2[2]==dizi1[i+2])
            evet=1;
    }
    return evet;
}
