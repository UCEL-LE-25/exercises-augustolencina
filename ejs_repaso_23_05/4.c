typedef struct
{
    int sumaValoresNoNegativos;
    int cantValoresNegativos;
} Estadistica;

Estadistica procesa_matriz(int N, int mat[N][N])
{
    Estadistica estadistica = {0, 0};
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (mat[i][j] >= 0)
            {
                estadistica.sumaValoresNoNegativos += mat[i][j];
            }
            else
            {
                estadistica.cantValoresNegativos++;
            }
        }
    }
}