#include<stdio.h>
// 9.9   176
int main()
{
    dikdortgenciz(10, 30, 10, 32);
    return 0;
}
void dikdortgenciz(int x1, int x2, int y1, int y2)
{

    printf("%c", 201);
    for(int i=x1; i<=x2; i++)
    {
        printf("%c", 205);
    }
    printf("%c", 187);
    printf("\n");
    for(int i=y1; i<=y2; i++)
    {
        for(int j=y1; j<=y2; j++)
        {
            if(j==y1 || j==y2 )
                printf("%c", 186);
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("%c", 200);
    for(int i=x1; i<=x2; i++)
    {
        printf("%c", 205);
    }
    printf("%c", 188);
}
