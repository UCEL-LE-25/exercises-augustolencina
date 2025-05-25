#include<stdio.h>

int main()
{
    int n;
    int array[100];

    do
    {
        printf("Ingrese la cantidad de elementos del arreglo (entre 1 y 100): ");
        scanf("%d", &n);
    } while (n < 1 || n > 100);

    for (int i = 0; i < n; i++)
    {
        printf("Ingrese el elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int max = array[0];
    int min = array[0];
    
    for (int j = 0; j < n; j++)
    {
        if (array[j] > max)
        {
            max = array[j];
        }
        if (array[j] < min)
        {
            min = array[j];
        }
    }

    printf("El valor maximo es: %d\n", max);
    printf("El valor minimo es: %d\n", min);

    return 0;
}
