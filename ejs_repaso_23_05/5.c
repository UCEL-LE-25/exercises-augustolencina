typedef struct
{
    int semana;
    int ventasDiarias[7];
    int totalSemanal;
} Venta;

void registra_ventas(int M, Venta semanas[])
{
    for (int i = 0; i < M; i++)
    {
        semanas[i].semana = i + 1;
        semanas[i].totalSemanal = 0;
        
        printf("Semana %d: \n", semanas[i].semana);

        for (int j = 0; j < 7; j++)
        {
            int venta;
            
            do
            {
                printf("Ingrese venta del dia %d: ", j + 1);
                scanf("%d", &venta);
            } while (venta < 0);

            semanas[i].ventasDiarias[j] = venta;
            semanas[i].totalSemanal += venta;
        }
    }
}