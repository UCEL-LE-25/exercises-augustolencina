#include<stdio.h>
#include<stdbool.h>
#define VIDA_MAXIMA 100

int main() {
    int vida;
    float escudo = 25.0f;
    bool tienePocion = true;

    printf("Ingrese vida del jugador (0 - %d): ", VIDA_MAXIMA);
    if (scanf("%d", &vida) != 1) {
        printf("Error: ingrese un valor numerico valido\n");
        return 1;
    }

    if (vida == VIDA_MAXIMA && escudo > 0.0f) {
        printf("Jugador con vida y escudo\n");
    } else if (vida > 0 && tienePocion) {
        printf("Jugador herido pero tiene pocion para curarse\n");
    } else if (vida <= 0) {
        printf("Jugador muerto\n");
    }
}
