#include <stdio.h>
#include <math.h>
//11.49 with a little deffrent
int main() {
  // Öğrenci sayısını ve notlarını tutan diziler
  const int numStudents = 10;
  int grades[numStudents];

  // Öğrenci notlarını klavyeden gir
  for (int i = 0; i < numStudents; i++) {
    printf("%d. ogrencinin notunu giriniz: ", i+1);
    scanf("%d", &grades[i]);
  }

  // Sınıf ortalamasını hesapla
  int sum = 0;
  for (int i = 0; i < numStudents; i++) {
    sum += grades[i];
  }
  double mean = (double) sum / numStudents;

  // Standart sapmanı hesapla
  double stddev = 0;
  for (int i = 0; i < numStudents; i++) {
    stddev += pow(grades[i] - mean, 2);
  }
  stddev = sqrt(stddev / numStudents);

  // Notları harf notlarına dönüştür ve yazdır
  for (int i = 0; i < numStudents; i++) {
    if (grades[i] >= mean + stddev) {
      printf("%d. ogrenci icin A harf notu\n", i+1);
    } else if (grades[i] >= mean) {
      printf("%d. ogrenci icin B harf notu\n", i+1);
    } else if (grades[i] >= mean - stddev) {
      printf("%d. ogrenci icin C harf notu\n", i+1);
    } else if (grades[i] >= mean - 2 * stddev) {
      printf("%d. ogrenci icin D harf notu\n", i+1);
    } else {
      printf("%d. ogrenci icin F harf notu\n", i+1);
    }
  }

  return 0;
}



sıralı dizileri birlestirme
#include <stdio.h>
void main()

{

    int N=6,M=4,ia=0,ib=0,ic=0,i;
    int A[] = {1,3,5,7,8,9};
    int B[] = {2,6,10,13};
    int C[10];
    while(ia<N && ib<M){
    if(A[ia]>B[ib]){
    C[ic] = B[ib];
    ib++; ic++;
    }else{
    C[ic] = A[ia];
    ia++; ic++;

    }

    }

    while(ib<M){
    C[ic] = B[ib];
    ib++; ic++;

    }

    while(ia<N){
    C[ic] = A[ia];
    ia++; ic++;

    }

    for(i=0;i<N+M;i++){
    printf("%d ",C[i]);
    }

}

// the array that delete the negative elements of array and shift it to the left 
#include <stdio.h>
int negatif_sayi(int sayi);
void duzenle(int dizi[], int adet);
int main()
{
  int dizi[9] = {1, 3, -1, 6, -5, 4, -3, -2, 9};
  int adet = 9;

  duzenle(dizi, adet);

  for (int i = 0; i < adet; i++) {
    printf("%d ", dizi[i]);
  }
  printf("\n");

  return 0;
}

void duzenle(int dizi[], int adet)
{
  int size = adet;
  for (int i = 0; i < size; i++) {
    if (negatif_sayi(dizi[i])) {
      for (int j = i; j < size; j++) {
        dizi[j] = dizi[j + 1];
      }
      dizi[size - 1] = 0;
      size--;
      i--;
    }
  }
  // Set the remaining elements of the array to 0
  for (int i = size; i < adet; i++) {
    dizi[i] = 0;
  }
}

int negatif_sayi(int sayi)
{
  if (sayi < 0) {
    return 1;
  } else {
    return 0;
  }
}
