#include<stdio.h>

void encontrarMaximo(int array[], int cant, int* max2);

int main(){
    int numbers[] = {33, 7, 9, 128};
    int lenght = sizeof(numbers) / sizeof(numbers[0]);
    int max1 = 0;

    encontrarMaximo(numbers, lenght, &max1);

    printf("Max value: %d\n", max1);

    return 0;
}

void encontrarMaximo(int array[], int cant, int* max2){
    for (int i = 0; i < cant; i++)
    {
        if (array[i] > *max2)
        {
            *max2 = array[i];
        }
        
    }
}