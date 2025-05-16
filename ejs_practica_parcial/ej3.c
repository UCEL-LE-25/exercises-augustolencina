#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define NUM_FLECHAS 10
#define PROBABILIDAD 60

int main() {
    int flechas[NUM_FLECHAS] = {0};
    int aciertos = 0, fallos = 0;

    srand(time(NULL));

    for (int i = 0; i < NUM_FLECHAS; i++) {
        if ((rand() % 100) < PROBABILIDAD) {
            flechas[i] = 1;
            aciertos++;
        } else {
            flechas[i] = 0;
            fallos++;
        }
    }
    
    printf("\n");
    printf("Aciertos: %d\n", aciertos);
    printf("Fallos: %d\n", fallos);
    printf("\n");

    for (int i = 0; i < NUM_FLECHAS; i++) {
        printf("%d", flechas[i]);
        if (i < NUM_FLECHAS - 1) {
            printf(", ");
        }
    }

    return 0;
}