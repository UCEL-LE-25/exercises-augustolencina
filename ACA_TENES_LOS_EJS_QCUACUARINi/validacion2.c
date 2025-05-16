#include<stdio.h>

int main()
{
    int pinIngresado;
    int intentos = 0;
    const int PIN_CORRECTO = 1234;
    int acceso = 0;

    do
    {
        printf("Ingrese el pin: ");
        scanf("%d", &pinIngresado);

        if (pinIngresado == PIN_CORRECTO)
        {
            printf("Acceso concedido\n");
            acceso = 1;
        }else
        {
            intentos += 1;
        }
        
    } while (intentos < 5 && acceso == 0);
    

    if(!acceso){printf("Acceso Denegado");}

    
    return 0;
}