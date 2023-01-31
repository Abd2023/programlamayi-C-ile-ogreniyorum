#include <stdio.h>
//11.33
//1 0 1 1 0 1 0 1 1 1
//1 1 0 1 0 1 1 1 0 1
int main() {
    int birinci_dizi[10];
    int ikinci_dizi[10];
    printf("birinci dizi elemanlarini giriniz : ");
    for(int i=0; i<10; i++)
        scanf("%d", &birinci_dizi[i]);
    printf("ikinci dizi elemanlarini giriniz : ");
    for(int j=0; j<10; j++)
        scanf("%d", &ikinci_dizi[j]);
    int count=0;
    for(int k=0; k<10;k++)
    {
        if(birinci_dizi[k] != ikinci_dizi[k])
            count++;
    }
    printf("Iki dizi arasindaki hamming uzakligi : %d", count);
    return 0;
}
