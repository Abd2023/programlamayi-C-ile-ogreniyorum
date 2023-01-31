#include<stdio.h>
/*
9.16-----178
*/
float yardmetreCevir(float, char);
int main()
{
    printf("%.4f\n", yardmetreCevir(3, 'y'));
	return 0;
}
float yardmetreCevir(float sayi, char tur)
{
    if(tur=='y')
    {
        return sayi*0.9144;
    }
    else
        return sayi*(1/0.9144);
}
