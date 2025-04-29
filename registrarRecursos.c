#include<stdio.h>
#include "registrarRecursos.h"

void registrarRecursos(int array[RESOURCES][DAYS], int* wat = 0, int* fo = 0, int* med = 0){
    for(int i = 0; i < RESOURCES; i++){
        for (int j = 0; j < DAYS; j++){
            printf("Ingrese la cantidad del recurso %d en el dia %d: ", i+1, j+1);
            scanf("%d", &array[i][j]);

            if (i == 0){
                *wat++;
            }else if (i == 1){
                *fo++;
            }else if (i == 2){
                *med++;
            }
        }
    }
}

void compararRecursos(int wat, int fo, int med){
    int high
}
