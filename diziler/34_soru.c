#include <stdio.h>
//11.34
//1 0 1 1 0 1 0 1 1 1
//1 1 0 1 0 1 1 1 0 1
int main() {
    int dizi1[7]={3,12,1,12,7,3,12};
    int dizi2[3]={3,12,41};
    int c =kactane_var(dizi1, 7, dizi2, 2);
    printf("sonuc = %d ", c);

    return 0;
}
int kactane_var(int dizi1[], int dizi1_eleman_sayi, int dizi2[] , int dizi2_eleman_sayi)
{
    int count =0;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<7; j++)
        {
            if(dizi2[i]==dizi1[j])
            {
                count++;
                break;
            }
        }
    }
    return count;
}
