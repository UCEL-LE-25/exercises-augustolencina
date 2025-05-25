int contar_pares(int arr[], int n)
{
    int cantPares = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cantPares++;
        }
    }

    return cantPares;
}