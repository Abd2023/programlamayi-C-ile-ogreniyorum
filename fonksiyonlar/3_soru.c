#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/*
9.3------174
*/
void dikdortgen();
void ucgen();
void bosluk();
int main()
{
    ucgen();
    dikdortgen();
    bosluk();
    ucgen();
    dikdortgen();
}
void ucgen()
{
    printf("   /\\     \n");
    printf("  /  \\    \n");
    printf(" /    \\   \n");
    printf("/      \\  \n");
    printf("--------   \n");
}

void dikdortgen()
{
    printf("--------\n");
    printf("|      |\n");
    printf("|      |\n");
    printf("|      |\n");
    printf("--------\n");
}

void bosluk()
 {
     printf("\t\t\n");
     printf("\t\t\n");
 }
