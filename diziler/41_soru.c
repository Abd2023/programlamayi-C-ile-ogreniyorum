#include<stdio.h>
// 11.41

int main()
{
    int dizi1[7]={3,12,1,12,7,3,12};
    int dizi2[3]={3,12};
    icindekileri_sifirla(dizi1, 7, dizi2, 2);
    for(int c=0; c<7; c++)
        printf("%d , \n", dizi1[c]);
   return 0;
}
void icindekileri_sifirla(int dizi1[], int adet1, int dizi2[], int adet2)
{
    for(int i=0; i<7; i++)
    {
        if(dizi2[0]==dizi1[i] && dizi2[1]==dizi1[i+1])
        {
            dizi1[i]=0;
            dizi1[i+1]=0;
        }
    }
}
