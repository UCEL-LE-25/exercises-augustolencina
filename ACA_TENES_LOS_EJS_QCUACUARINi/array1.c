#include<stdio.h>

int main(){
    int entrada[4] = {0, 1, 2, 3};
    int salida[4];
    int lenght = sizeof(entrada) / sizeof(entrada[0]);
    
    for (int i = lenght; i >= lenght; i--)
    {
        salida[lenght - 1] = entrada[i];
    }
    
    for (int j = 0; j < lenght; j++)
    {
        printf("%d", j);
    }
    

    return 0;
}