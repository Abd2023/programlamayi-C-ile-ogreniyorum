#include<stdio.h>
#include<math.h>
#include<time.h>
// 9.40   185
int rastgele(int ,  int , int , int);
int main()
{
    rastgele(-2, 3, 2, -2);
    return 0;
}
int rastgele(int x1 ,int y1, int x2, int y2)
{
    srand(time(NULL));
    if(y1>y2)
    {
        int c=y1;
        y1=y2;
        y2=c;
    }
    if(x1>x2)
    {
        int c=x1;
        x1=x2;
        x2=c;
    }
    for(int i=1; i<=100; i++){
        int rastgeleX=x1+rand()%(x2-x1+1);
        int rastgeleY=y1+rand()%(y2-y1+1);
        printf("Nokta=( %d , %d )\n", rastgeleX, rastgeleY);
    }
}
