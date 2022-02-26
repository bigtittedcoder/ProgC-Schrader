/*
3.10.2. Umsatzberechnung und Gewinn
Erweitern Sie das Programm so, dass auch die Einkaufskosten der Ware erfragt werden,
so dass in Folge auch der erzielte Gewinn ausgegeben werden kann.
*/

#include <stdio.h>

float umsatz(int* anzahl, float* preis)
{
    return (*preis)*(*anzahl);
}

float gewinn(int* anzahl, float* preis, float* verkaufspreis)
{

    return ((*anzahl)*(*verkaufspreis))-umsatz(anzahl, preis);
}

int main()
{
    int   anzahl= 0;
    float preis = 0.0;
    float verkaufspreis= 0.0;

    printf("--Umsatzrechner--\n");
    printf("Geben Sie Anzahl ihrer Ware und den Preis in Format \"anzahl preis\" an.\n");
    scanf("%d %f", &anzahl, &preis);

    printf("Erzielter Umsatz: %.2f €\n", umsatz(&anzahl, &preis));

    printf("--Gewinnrechner--\n");
    printf("Geben Sie den Verkaufspreis der Ware an: \n");
    scanf("%f", &verkaufspreis);
    printf("\nErzielter Gewinn: %.2f €", gewinn(&anzahl, &preis, &verkaufspreis));


    return 0;
}
