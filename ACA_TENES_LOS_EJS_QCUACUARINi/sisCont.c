#include <stdio.h>
#include "sisCont.h"

void retirarStock(int* codigos[FILAS][COLUMNAS], int* stock[FILAS][COLUMNAS])
{
    int w, s, units;
    
    printf("Ingrese la fila del producto existente: \n");
    scanf("%d", &w);
    printf("Ingrese la columna del producto existente: \n");
    scanf("%d", &s);
    printf("Ingrese la cantidad a retirar: \n");
    scanf("%d", &units);
    if (*stock[w][s] > units)
    {
        *stock[w][s] -= units;
    }else if (*stock[w][s] == units)
    {
        *stock[w][s] -= units;
        *codigos[w][s] = {0};
    }else{
        printf("\nLa cantidad seleccionada a retirar es mayor al stock disponible.\n");
    }
    
}

void buscarProducto(int* codigos[FILAS][COLUMNAS], int* stock[FILAS][COLUMNAS])
{
    int code;
    printf("Ingrese codigo del producto: \n");
    scanf("%d", &code);

    for
}