//11.30
#include <stdio.h>

// Function prototype
void normalize(int array[], int length);

int main() {
    // Read in the array
    int array[20];
    printf("Enter the grades of the 20 students:\n");
    for (int i = 0; i < 20; i++) {
    scanf("%d", &array[i]);
    }

    // Normalize the array
    normalize(array, 20);

    // Print the normalized array
    printf("The normalized grades are:\n");
    for (int i = 0; i < 20; i++) {
    printf("%d ", array[i]);
    }
    printf("\n");

return 0;
}

// Function definition
void normalize(int array[], int length) {
    // Find the largest element in the array
    int max = 0;
    for (int i = 0; i < length; i++) {
    if (array[i] > max) {
    max = array[i];
    }
    }

    // Calculate the percentage increase needed to reach 100
    int percentIncrease = 100 - max;

    // Increase all elements by the same percentage
    for (int i = 0; i < length; i++) {
    array[i] += (array[i] * percentIncrease) / max;
    }
}
