// 11.11
#include <stdio.h>

int main() {
    // Create the lists of on and off lights
    int on_lights[50] = {0};
    int off_lights[50] = {0};
    int num_on_lights = 0;
    int num_off_lights = 0;

    // Loop through 10 cars
    for (int car_number = 1; car_number <= 10; car_number++) {
        // Loop through the list of lights
        for (int i = 0; i < 50; i++) {
            // If the light number is divisible by the car number, toggle the light
            if ((i + 1) % car_number == 0) {
                // If the light was previously off, add it to the list of on lights
                if (on_lights[i] == 0) {
                    on_lights[i] = i + 1;
                    num_on_lights++;
                } else {
                    // If the light was previously on, remove it from the list of on lights
                    // and add it to the list of off lights
                    on_lights[i] = 0;
                    off_lights[i] = i + 1;
                    num_on_lights--;
                    num_off_lights++;
                }
            }
        }
    }

    // Print the list of on lights
    printf("On lights:\n");
    for (int i = 0; i < num_on_lights; i++) {
        if (on_lights[i] != 0) {
            printf("%d ", on_lights[i]);
        }
    }
    printf("\n");

    // Print the list of off lights
    printf("Off lights:\n");
    for (int i = 0; i < num_off_lights; i++) {
        if (off_lights[i] != 0) {
            printf("%d ", off_lights[i]);
        }
    }
    printf("\n");

    return 0;
}
