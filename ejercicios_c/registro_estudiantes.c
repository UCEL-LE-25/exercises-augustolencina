#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_NOMBRE 20

struct Estudiante{
    char nombre[TAM_NOMBRE];
    int edad;
    float nota_final;
};

int main() {
    struct Estudiante estudiantes[10];
    int cantidad = 0;
    int opcion;

    do {
        printf("1. Agregar estudiante\n");
        printf("2. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        if (opcion == 1) {
            if (cantidad < 10) {
                printf("\nIngrese el nombre del estudiante: ");
                getchar();
                fgets(estudiantes[cantidad].nombre, TAM_NOMBRE, stdin);
                estudiantes[cantidad].nombre[strcspn(estudiantes[cantidad].nombre, "\n")] = 0;

                printf("Ingrese la edad: ");
                scanf("%d", &estudiantes[cantidad].edad);

                printf("Ingrese la nota final: ");
                scanf("%f", &estudiantes[cantidad].nota_final);

                cantidad++;

                printf("Estudiante agregado con éxito.\n");
            } else {
                printf("No se pueden agregar más estudiantes. Límite alcanzado.\n");
            }

        } else if (opcion == 2) {
            printf("Saliendo del programa.\n");
        } else {
            printf("Opción inválida.\n");
        }
    } while(opcion != 2);

    return 0;
}
