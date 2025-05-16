#include<stdio.h>

typedef struct {
    char nombre[20];
    float precio;
} Material;

int main() {
    Material tabla = {"Tabla", 50};
    Material clavo = {"Clavo", 10};
    Material soga = {"Soga", 75};
    int monedas;
    float precioFinal = (tabla.precio * 2) + (clavo.precio * 4) + soga.precio;

    printf("Ingrese la cantidad de monedas que posee: ");
    scanf("%d", &monedas);

    if (monedas >= precioFinal) {
        monedas -= precioFinal;
        printf("Compra exitosa!\n");
        printf("Detalles:\n");
        printf("Tabla  x  2  -  $100\n");
        printf("Clavo  x  4  -  $40\n");
        printf("Soga   x  1  -  $75\n");
        printf("Total: $%f\n", precioFinal);
        printf("Monedas restantes: %d", monedas);
    } if (monedas == soga.precio) {
        monedas -= soga.precio;
        printf("Cantidad de monedas insuficientes para comprar todos los materiales!\n");
        printf("Solo pudo comprar soga!\n");
        printf("Detalles:\n");
        printf("Soga   x  1  -  $75\n");
        printf("Total: $%f\n", soga.precio);
        printf("Monedas restantes: %d", monedas);
    } else {
        printf("No puede comprar ningun material!\n");
        printf("Cantidad de monedas: %d", monedas);
    }

    return 0;
}