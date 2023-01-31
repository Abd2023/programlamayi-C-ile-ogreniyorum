#include<stdio.h>
#include<math.h>
// 11.12
int ilkTekralayan(int dizi[], int kacTane);
int main()
{
    int dizi[7]={3,12,1,12,7,7,12}, c=0;

    c=ilkTekralayan(dizi, 7);
    printf("Dizinin ilk tekrarlayani = %d", c);
   return 0;
}
int ilkTekralayan(int dizi[], int kacTane)
{
    int index=0, ilkDegisken;
    while (index<=kacTane)
    {
        ilkDegisken=dizi[index++];
        for(int i=index; i<kacTane; i++)
        {
            if(ilkDegisken == dizi[i])
            {
                return ilkDegisken;
            }
        }
    }
}
