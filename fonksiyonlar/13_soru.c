#include<stdio.h>
/*
9.13-----177
*/
float gronsCevir(float, char);
int main()
{
    printf("%.7f\n", gronsCevir(1, 'gr'));
	return 0;
}
float gronsCevir(float sayi, char tur)
{
    if(tur=='o')
    {
        return sayi*28.3495231;
    }
    else
        return sayi*(1/28.3495231);
}
