#include<stdio.h>
#include<math.h>
#define N 5
// 11.14
void ortak(int Adizi[], int Bdizi[], int kacTane);
int main()
{
    int Adizi[N]={4,1,9,6,1};
    int Bdizi[N]={1,3,5,3,4};
    //int birlesmis[N*2];
    //int index=0;
    /*for(int i=0; i<N; i++)
    {
        birlesmis[index++]=Adizi[i];
        birlesmis[index++]=Bdizi[i];
    }*/
    ortak(Adizi, Bdizi, N);
    /*for(int i=0; i<N*2; i++)
        printf("%d,   ", birlesmis[i]);
    */
   return 0;
}
void ortak(int Adizi[], int Bdizi[], int kacTane)
{
    int ortak=0;
    int Fdizi[kacTane];
    int k=0, count=0;
    printf("Ortak olanlar : ");
    for(int i=0; i<kacTane; i++)
    {
        for(int j=0; j<kacTane; j++)
        {
           if(Adizi[i]==Bdizi[j])
            {
                count=0;
                for(int x=0; x<k; x++)
                {
                    if(Adizi[i]==Fdizi[x])
                        count++;
                }
                if(count==0)
                {
                    Fdizi[k]=Adizi[i];
                    k++;
                }
            }
        }
    }
    for(int i=0; i<k; i++)
    {
        if(Fdizi!=0)
             printf("%d,   ", Fdizi[i]);
    }
}
