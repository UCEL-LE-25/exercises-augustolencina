#ifndef IMPRESORAS_H
#define IMPRESORAS_H

#define SECTORS 3
#define PRINTERS 4

extern const char* sectorsNames[SECTORS];

typedef struct {
    int status;
    int pages;
} Printer;

void menu();
void loadPrinter(Printer officeArray[SECTORS][PRINTERS]);
void totalPagesPerSector(Printer officeArray[SECTORS][PRINTERS]);
void activePrintersPerSector(Printer officeArray[SECTORS][PRINTERS]);
void sectorWithMorePages(Printer officeArray[SECTORS][PRINTERS]);
void showOfficeMatrix(Printer officeArray[SECTORS][PRINTERS]);

#endif