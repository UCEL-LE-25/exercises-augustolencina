int filtrar_mayores(int arr[], int n, int umbral, int out[])
{
    int aux, cont, j = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > umbral)
        {
            aux = arr[i];
            out[j] = aux;
            cont++;
            j++;
        }
    }

    return cont;
}