#include<stdio.h>
#include<string.h>

#define MIN_UNITS 3
#define MAX_PRODUCTS 9
#define MAX_CART 20

typedef struct
{
    char name[20];
    int units;
} Order;

typedef struct
{
    int id;
    char name[20];
    float price;
    int units;
    int isActive;
} Product;

int main()
{
    Product products[MAX_PRODUCTS] = {
        {{1,"clavo",25.5,60,1}, {2,"bulon",22,55,1}, {3,"tornillo",20,30,1}},
        {{4,"cinta",15,10,1}, {5,"destornillador",30,10,1}, {6,"tuerca",12,40,1}},
        {{7,"pegamento",15,23,1}, {8,"cuter",20,11,1}, {9,"taladro",40,50,1}}
    };

    Order cart[MAX_CART];
    int cartSize = 0;

    int productId;

    printf("\nCATALOGO DE PRODUCTOS\n");
    printf("Codigo | Nombre           | Precio | Stock\n");
    printf("----------------------------------------\n");
    for (int i = 0; i < 9; i++) {
        if (products[i].isActive) {
            printf("%2d | %-15s | %6.2f | %5d\n", products[i].id, products[i].name, products[i].price, products[i].units);
        }
    }
    
    do
    {   
        printf("\nIngrese el id del producto (0 para salir): ");
        scanf("%d", &productId);

        int found = 0;
        
        for (int i = 0; i < MAX_PRODUCTS; i++)
        {
            if (products[i].id == productId)
            {
                found = 1;

                if (products[i].isActive == 1)
                {
                    int amount;
                    printf("Ingrese la cantidad que quiere comprar: ");
                    scanf("%d", &amount);
                        
                    if (products[i].units >= amount)
                    {
                        products[i].units -= amount;
                        strcpy(cart[cartSize].name, products[i].name);
                        cart[cartSize].units = amount;
                        cartSize++;
                        printf("Compra realizada! Stock restante: %d\n", products[i].units);
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
            }
        }

        if (found == 0)
        {
            printf("Producto no encontrado!\n");
        }
    } while (productId != 0);

    if (cartSize > 0)
    {
        printf("\n--- RESUMEN DE LA COMPRA ---\n");
        printf("Nombre del producto | Cantidad\n");
        printf("-----------------------------\n");

        for (int i = 0; i < cartSize; i++)
        {
            printf("%-18s | %d\n", cart[i].name, cart[i].units);
        }
    } 
    else
    {
        printf("\nEl carrito está vacío.\n");
    }
    
    return 0;    
}
