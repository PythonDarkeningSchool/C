#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void printArray(float *totalResistencias, int resistencias) {
    for (int i = 0; i < resistencias; i++) {
        printf("%.2f, ", totalResistencias[i]);
    }
}

int main()
{
    int resistencias;
    printf("\n\nIngrese el total de resistencias: ");
    scanf("%d", &resistencias);

    float *totalResistencias = malloc(resistencias * sizeof(*totalResistencias));
    if (!totalResistencias) {
        printf("No se pudo definir la lista");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < resistencias; i++){
        printf("Ingrese el valor de la resistencia #%i: ", i+1);
        scanf("%f", &totalResistencias[i]);
    }

    //printArray(totalResistencias, resistencias);

    int opcion;
    printf("\nMenu\n\n");
    printf("1. Resistencias en serie\n");
    printf("2. Resistencias en paralelo\n");
    printf("3. Salir\n\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    float sumaResistenciasSerie;
    float sumaResistenciasParalelo, tmpSumaResistenciasParalelo;

    switch(opcion)
    {
    case 1:
        // Resistencia en serie
        for (int i = 0; i < resistencias; i++) {
            sumaResistenciasSerie += totalResistencias[i];
        }
        printf("\n\nLa suma de la resistencias es: %.2f", sumaResistenciasSerie);
        break;
    case 2:
        // Resistencia en paralelo
        for (int i = 0; i < resistencias; i++) {
            tmpSumaResistenciasParalelo += 1 / totalResistencias[i];
        }
        sumaResistenciasParalelo = 1 / tmpSumaResistenciasParalelo;
        printf("\n\nLa suma de la resistencias es: %.2f", sumaResistenciasParalelo);

        break;
    case 3:
        printf("\n\nSaliendo ...\n");
        break;
    default:
        printf("\n\nOpcion invalida, saliendo del menu ...\n");
        break;
    }

    return 0;

}

