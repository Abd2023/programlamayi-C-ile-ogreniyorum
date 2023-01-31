#include<stdio.h>
// 11.43
char en_cok_tekrareden(char dizi[] , int adet);
int main()
{
    char dizi[7]={'p','r','o','g','r','a','m'};
    char c= en_cok_tekrareden(dizi, 7);
    printf("En cok tekrar eden harf = %c", c);

   return 0;
}
char en_cok_tekrareden(char dizi[] , int adet)
{
    int count=0;
    int max_count=0;
    char max_char;
    for(int i=0; i<adet; i++)
    {
        count=0;
        for(int j=0; j<adet; j++)
        {
            if(dizi[i]==dizi[j])
            {
                count++;
            }
        }
        if(count>max_count)
        {
            max_count=count;
            max_char=dizi[i];
        }
    }
    return max_char;
}
