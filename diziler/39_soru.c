#include<stdio.h>
// 11.39
//4 1 9 6 1 1 3 5 3 4
int main()
{
    int a_dizi[10];
    printf("A dizisinin elemanlarini giriniz : ");
    for(int i=0; i<10; i++)
    {
        scanf("%d", &a_dizi[i]);
    }
    int count=0;
    int found=0;
    for(int i=0; i<10; i++)
    {
        found=0;
        count=0;
        for(int j=0; j<10; j++)
        {
            if(a_dizi[i]==a_dizi[j])
            {
                count++;
            }
        }
        for(int k=0; k<i; k++)
        {
            if(a_dizi[i]==a_dizi[k])
            {
                found=1;
                break;
            }
        }
        if(!found)
            printf("%d sayisindan %d tane \n", a_dizi[i], count);
    }
   return 0;
}
