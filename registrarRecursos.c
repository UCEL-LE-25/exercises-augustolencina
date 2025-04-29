#include<stdio.h>
#include "registrarRecursos.h"

void registrarRecursos(int array[RESOURCES][DAYS], int* wat, int* fo, int* med) {
    for (int i = 0; i < RESOURCES; i++) {
        for (int j = 0; j < DAYS; j++) {
            printf("Ingrese la cantidad del recurso %d en el dia %d: ", i + 1, j + 1);
            scanf("%d", &array[i][j]);

            if (i == 0) {
                (*wat) += array[i][j];
            } else if (i == 1) {
                (*fo) += array[i][j];
            } else if (i == 2) {
                (*med) += array[i][j];
            }
        }
    }
}

void printPromedioRecursos(int array[RESOURCES][DAYS]) {
    for (int i = 0; i < RESOURCES; i++) {
        int sum = 0;
        for (int j = 0; j < DAYS; j++) {
            sum += array[i][j];
        }
        float average = (float)sum / DAYS;
        printf("El promedio del recurso %d es: %.2f\n", i + 1, average);
    }
}

void printMayorYMenorRecurso(int array[RESOURCES][DAYS]) {
    int total[RESOURCES] = {0};

    for (int i = 0; i < RESOURCES; i++) {
        for (int j = 0; j < DAYS; j++) {
            total[i] += array[i][j];
        }
    }

    int maxIndex = 0, minIndex = 0;
    for (int i = 1; i < RESOURCES; i++) {
        if (total[i] > total[maxIndex]) {
            maxIndex = i;
        }
        if (total[i] < total[minIndex]) {
            minIndex = i;
        }
    }

    printf("El recurso con mayor distribucion es el recurso %d con un total de %d.\n", maxIndex + 1, total[maxIndex]);
    printf("El recurso con menor distribucion es el recurso %d con un total de %d.\n", minIndex + 1, total[minIndex]);
}