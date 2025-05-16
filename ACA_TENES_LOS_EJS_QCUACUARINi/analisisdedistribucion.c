#include<stdio.h>
#include "registrarRecursos.h"

int main(){
    int option, continuar = 0, water = 0, food = 0, medicine = 0;;
    int arrayResources[RESOURCES][DAYS] = {0};

    do{
        printf("1. Registrar la cantidad de recursos.\n");
        printf("2. Mostrar recurso que recibio mayor y menor distribucion.\n");
        printf("3. Mostrar el promedio de distribucion para cada recurso.\n");
        printf("4. Salir.\n");
        scanf(" %d", &option);
        
        switch (option)
        {
            case 1:
                registrarRecusos(arrayResources, &water, &food, &medicine);
                break;
            case 2:
                compararRecusos(water, food, medicine);
                break;
            case 4:
                continuar = 1;
                break;
    
            default:
                break;
        }
    }while (continuar != 1)

    return 0;
}