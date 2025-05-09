#include<stdio.h>
#include"impresoras.h"

int main() {
    Printer office[SECTORS][PRINTERS] = {0};
    int option;

    do {
        menu();
        scanf("%d", &option);
        
        switch (option) {
        case 1: loadPrinter(office); break;
        case 2: totalPagesPerSector(office); break;
        case 3: activePrintersPerSector(office); break;
        case 4: sectorWithMorePages(office); break;
        case 5: showOfficeMatrix(office); break;
        case 6: printf("Saliendo del sistema...\n"); break;
        default: printf("Opcion invalida. Intente de nuevo!\n"); break;
        }
    } while (option != 5);

    return 0;
}
