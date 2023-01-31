#include<stdio.h>
/*
9.15-----177
*/
int isaret(int sayi);
int main()
{
    printf("%d\n", isaret(-500));
	return 0;
}
int isaret(int sayi)
{
    if(sayi>0)
        return 1;
    else if(sayi<0)
        return -1;
    else
        return 0;
}
