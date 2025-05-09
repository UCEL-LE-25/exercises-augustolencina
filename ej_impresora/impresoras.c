#include<stdio.h>
#include"impresoras.h"

const char* sectorsNames[SECTORS] = {"ADMINISTRACION", "TECNICA", "RECURSOS HUMANOS"};

void menu() {
    printf("1. Cargar o Modificar impresora\n");
    printf("2. Ver paginas impresas por sector\n");
    printf("3. Ver impresoras activas por sector\n");
    printf("4. Ver sector con mas paginas impresas\n");
    printf("5. Ver matriz\n");
    printf("6. Salir\n");
    printf("Seleccione una opcion: ");
}

void loadPrinter(Printer officeArray[SECTORS][PRINTERS]) {
    int sector, printerNumber, newStatus, newPages;
    printf("Sectores:\n");
    printf("0 = Administracion\n");
    printf("1 = Tecnica\n");
    printf("2 = Recursos Humanos\n");
    printf("Seleccione uno: \n");
    scanf("%d", &sector);
    printf("Seleccione una impresora (0-3): \n");
    scanf("%d", &printerNumber);
    if (sector < 0 || sector >= SECTORS || printerNumber < 0 || printerNumber >= PRINTERS) {
        printf("Sector o número de impresora inválido!\n");
        return;
    }
    printf("Ingrese estado (0=Inactiva, 1=Activa): ");
    scanf("%d", &newStatus);
    printf("Ingrese cantidad de páginas impresas: ");
    scanf("%d", &newPages);
    officeArray[sector][printerNumber].status = newStatus;
    officeArray[sector][printerNumber].pages = newPages;
    printf("Impesora actualizada!\n");
}

void totalPagesPerSector(Printer officeArray[SECTORS][PRINTERS]) {
    int total = 0;
    for (int i = 0; i < SECTORS; i++) {
        for (int j = 0; j < PRINTERS; j++) {
            total += officeArray[i][j].pages;
        }
        printf("Sector %s: %d paginas\n", sectorsNames[i], total);
    }
}

void activePrintersPerSector(Printer officeArray[SECTORS][PRINTERS]) {
    for (int i = 0; i < SECTORS; i++) {
        int activePrinters = 0;
        for (int j = 0; j < PRINTERS; j++) {
            if (officeArray[i][j].status == 1) {
                activePrinters++;
            }
        }
        printf("Sector %s: %d impresoras activas\n", sectorsNames[i], activePrinters);
    }
}

void sectorWithMorePages(Printer officeArray[SECTORS][PRINTERS]) {
    int max = 0, maxSector = 0, total;
    for (int i = 0; i < SECTORS; i++) {
        for (int j = 0; j < PRINTERS; j++) {
            total += officeArray[i][j].pages;
            if (total > max) {
                max = total;
                maxSector = i;
            }
        }
    }
    if (maxSector > 0) {
        printf("El sector con mas paginas impresas es %s\n", sectorsNames[maxSector]);
    } else {
        printf("Todavia no hay impresiones registradas!\n");
    }
}

void showOfficeMatrix(Printer officeArray[SECTORS][PRINTERS]) {
    for (int i = 0; i < SECTORS; i++) {
        printf("%s:\n", sectorsNames[i]);
        for (int j = 0; j < PRINTERS; j++) {
            printf("Estado: %d Páginas: %d\t", officeArray[i][j].status, officeArray[i][j].pages);
        }
        printf("\n\n");
    }
}