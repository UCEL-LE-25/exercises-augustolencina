#include<stdio.h>

int main() {
    int dañoBase = 40;
    int mana;
    
    printf("Ingrese el mana del enemigo: ");
    scanf("%d", &mana);

    float dañoTotal = (mana * 0.15) + dañoBase;

    if (dañoTotal > 80) {
        printf("CRITICAL_HIT\n");
        printf("Daño total: %f", dañoTotal);
    } else {
        printf("NORMAL_HIT\n");
        printf("Daño total: %f", dañoTotal);
    }
}