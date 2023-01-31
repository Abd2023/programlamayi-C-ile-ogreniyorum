#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<time.h>
void bubble_sort(int arr[], int eleman_sayisi);
//11.22
int main()
{
    int arr[50]={0};
    srand(NULL);
    for(int i=0; i<50;i++)
    {
        arr[i] = 1+rand()%1000;
    }
    for(int i=0; i<50; i++)
    {
        printf("%d, " , arr[i]);
    }
    printf("\nSiralanmis hali : \n");
    bubble_sort(arr , 50);
    for(int i=0; i<50; i++)
    {
        printf("%d, " , arr[i]);
    }
    return 0;
}
void bubble_sort(int arr[], int eleman_sayisi)
{
    bool swap;
    int gecici=0;
    do
    {
    swap=false;
    for(int i=0; i<eleman_sayisi-1; i++)
    {
        if(arr[i]>arr[i+1])
        {
            gecici=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=gecici;
            swap=true;
        }
    }
    } while (swap==true);

}
