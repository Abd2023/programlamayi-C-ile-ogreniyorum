#include<stdio.h>
#include<math.h>
// 11.13     *** it works everytime
int ilkBenzersiz(int dizi[], int kacTane);
int main()
{
    int dizi[7]={2,2,3,3,4,4,5}, c=0;
    c=ilkBenzersiz(dizi, 7);
    printf("Dizinin ilk Benzersizi = %d", c);
   return 0;
}
int ilkBenzersiz(int dizi[], int kacTane)
{
    int temp;
    for(int i=0; i<kacTane; i++)
    {
        temp=0;
        for(int j=0; j<kacTane; j++)
        {
            if(i!=j)
            {
                if(dizi[i]==dizi[j])
                    temp++;
            }
        }
        if(temp==0)
        {
            return dizi[i];        
        }
    }
}
