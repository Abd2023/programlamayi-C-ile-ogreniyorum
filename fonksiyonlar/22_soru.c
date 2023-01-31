#include <stdio.h>
int main()
{
	int i, toplam, sayi;
	printf("Bir sayi girin: ");
	scanf("%d", &sayi);
		toplam = 0;
		for (i = 1; i < sayi; i++) // kendisinden küçük pozitif sayıları kontrol ediyoruz.
		{
			if (sayi%i == 0) // kontrol ettiğimiz sayıyı tam bölünüyorsa pozitif böleni toplama ekliyoruz.
			{
				toplam = toplam + i;
			}
		}
		if (toplam == sayi) // pozitif tam bölenlerinin toplamı sayının kensine eşitse sayı mükemmel sayıdır.
		{
			printf("%d bir mukemmel sayidir!", sayi);
		}
		else
		{
			printf("%d bir mukemmel sayi degildir!", sayi);
		}

	system("pause");
	return 0;
}
