#include<stdio.h>
#include<string.h>

int main()
{
    char cad[100];
    char vocales[5] = {'a', 'e', 'i', 'o', 'u'};
    int cont = 0;

    printf("Ingrese una cadena de texto(hasta 100 caracteres): \n");
    fgets(cad, sizeof(cad), stdin);

    for(int x = 0; x < strlen(cad); x++)
    {
        for(int w = 0; w < strlen(vocales); w++)
        {
            if (cad[x] == vocales[w])
            {
                cont++;
            }
        }
    }

    printf("Cantidad de vocales: %d\n", cont);

    return 0;
}
/*
Primero le pido al usuario que ingrese la cadena de texto.
Guardo la cadena con fgets.
Utilizo un 'for' que recorra la cadena que ingreso el usuario y otro que recorra
la cadena que contiene vocales.
Utilizo la estructura 'if' para comparar los caracteres. Si se cumple, se incrementa
el contador de vocales.
Al final utilizo el 'printf' para mostrar en pantalla la cantidad de vocales.
*/