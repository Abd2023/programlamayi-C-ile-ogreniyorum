//11.26
#include<stdio.h>
int main()
{
    int dizi[5] = {1,2,3,4,5};
    printf("%d ", siralimi(dizi, 5));
    return 0;
}
int siralimi(int dizi[], int eleman_sayisi)
{
    int yes=1;
    for(int i=0; i<eleman_sayisi-1; i++)
    {
        if(dizi[i]>dizi[i+1]){
            //printf("%d ", yes);
            yes = 0;
            break;
        }
    }
    return yes;
}
