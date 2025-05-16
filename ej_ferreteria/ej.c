#include<stdio.h>
#define MIN_UNITS 3

typedef struct
{
    int cantPed1;
    int cantPed2;
    int cantPed3;
} Pedido;

typedef struct
{
    int id;
    char name[20];
    float price;
    int units;
    int isActive;
} Product;

void checkMin(Product *selectedProduct);

int main()
{
    Product products[3][3] = {
        {{1,"clavo",25.5,60,1}, {2,"bulon",22,55,1}, {3,"tornillo",20,30,1}},
        {{4,"cinta",15,10,1}, {5,"destornillador",30,10,1}, {6,"tuerca",12,40,1}},
        {{7,"pegamento",15,23,1}, {8,"cuter",20,11,1}, {9,"taladro",40,50,1}}
    };

    int idProduct;
    Pedido pedido = {0, 0, 0};
    
    do
    {
        printf("\nIngrese el id del producto (0 para salir): ");
        scanf("%d", &idProduct);
        
        if(idProduct == 0) break;

        int encontrado = 0;
        
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (products[i][j].id == idProduct)
                {
                    encontrado = 1;
                    checkMin(&products[i][j]);
                    
                    if(products[i][j].isActive)
                    {
                        printf("Producto: %s - Precio: %.2f - Stock: %d\n", 
                               products[i][j].name, products[i][j].price, products[i][j].units);
                        printf("Ingrese la cantidad que quiere comprar: ");
                        int cant;
                        scanf("%d", &cant);
                        
                        if (products[i][j].units >= cant)
                        {
                            products[i][j].units -= cant;
                            
                            
                            if(pedido.cantPedido1 == 0)
                                pedido.cantPedido1 = cant;
                            else if(pedido.cantPedido2 == 0)
                                pedido.cantPedido2 = cant;
                            else
                                pedido.cantPedido3 = cant;
                                
                            printf("Compra realizada! Stock restante: %d\n", products[i][j].units);
                        }
                        else
                        {
                            printf("No hay suficiente stock!\n");
                        }
                    } 
                    else
                    {
                        printf("Producto no disponible (stock bajo minimo)!\n");
                    }
                    break;
                }
            }
            if(encontrado) break;
        }
        
        if(!encontrado && idProduct != 0)
        {
            printf("Producto no encontrado!\n");
        }
        
    } while (idProduct != 0);
    
    
    printf("\nResumen del pedido:\n");
    printf("Producto 1: %d unidades\n", pedido.cantPedido1);
    printf("Producto 2: %d unidades\n", pedido.cantPedido2);
    printf("Producto 3: %d unidades\n", pedido.cantPedido3);
    
    return 0;    
}

void checkMin(Product *selectedProduct)
{
    if (selectedProduct->units <= MIN_UNITS)
    {
        selectedProduct->isActive = 0;
    }
}
