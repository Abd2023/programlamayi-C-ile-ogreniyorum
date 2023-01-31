#include<stdio.h>
#include<math.h>
#include<time.h>
// 9.30   183
int asalBulma(int , char);
int main()
{
     printf("\n%d", asalBulma(12, 'k'));
    return 0;
}
int asalBulma(int sayi, char harf)
{
    if(harf=='b'){
        for(int j=sayi; ; j++){
            int asalSayi=1;
            for(int i=2; i<j; i++)
            {
                if(j%i==0)
                    asalSayi=0;
            }
            if(asalSayi==1)
                return j;
        }
    }else {
        for(int j=sayi; ; j--){
            int asalSayi=1;
            for(int i=2; i<j; i++)
            {
                if(j%i==0)
                    asalSayi=0;
            }
            if(asalSayi==1)
                return j;
    }
    }
}
