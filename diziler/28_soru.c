#include <stdlib.h>
#include <stdio.h>

void tekCiftDuzenle(int numara[100], int sayi)
{
    int a = 0;
    int i;
    int j;

    for (i = 0; i < sayi; i++)
    {
        if ((i % 2) == 0)
        {
            if ((numara[i] % 2) == 1)
                continue;
            else
            {
                for (j = i + 1; j < sayi; j++)
                {
                    if ((numara[j] % 2) == 1)
                    {
                        a = numara[i];
                        numara[i] = numara[j];
                        numara[j] = a;
                        break;
                    }
                }
                continue;
            }
        }
        else
        {
            if ((numara[i] % 2) == 0)
                continue;
            else
            {
                for (j = i + 1; j < sayi; j++)
                {
                    if ((numara[j] % 2) == 0)
                    {
                        a = numara[i];
                        numara[i] = numara[j];
                        numara[j] = a;
                        break;
                    }
                }
                continue;
            }
        }
    }
}

int main()
{

    int sayi;
    printf("Ogrenci sayisini giriniz = ");
    scanf("%d", &sayi);
    int numara[100];
    printf("Ogrenci numaralarini giriniz(%d adet) : ", sayi);
    for (int i = 0; i < sayi; i++)
    {
        scanf("%d", &numara[i]);
    }
    tekCiftDuzenle(numara, sayi);

    printf("\n\n");

    printf("Numaralarin bir tek, bir cift siralanmis hali : \n");

    for (int i = 0; i < sayi; i++)
    {
        printf("%d ", numara[i]);
    }

    return 0;
}
