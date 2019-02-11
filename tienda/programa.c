// importando librerias
#include <stdio.h>
#include <stdlib.h>
//#include <conio.h> // descomentar la linea para OS Windows

int main()
{
    // Declarando variables
    int iTotalCompra, iCantidadRecibida, iBilletesVeinte, iMonedasDiez,
        iMonedasCinco, iMonedasDos, iMonedasPeso;
    float var, fCambio;
    char cMensaje[] = "";

    /* 
      ESTE PROGRAMA SOLO FUNCIONA CON NUMEROS ENTEROS INGRESADOS
      POR EL USUARIO
    */

    // Pidiendo datos al usuario
    printf("\n - Por favor ingrese el total de la compra: $");
    scanf("%d", &iTotalCompra);
    printf(" - Por favor ingrese la cantidad a recibir: $");
    scanf("%d", &iCantidadRecibida);

    fCambio = iTotalCompra - iCantidadRecibida; // se obtienen 6 decimales

    printf("\nEl cambio a recibir es de : $%.2f\n\n", fCambio);

    if(fCambio >= (float)20){
        // calcular cuantos billetes de 20 se le daran al usuario
        iBilletesVeinte = fCambio / 20;
        printf("La cantidad de billetes de 20 son: %d\n", iBilletesVeinte);
        // decrementar el valor del cambio en base a los billetes de 20 otorgados
        fCambio = fCambio - (iBilletesVeinte * 20);
    }

    if(fCambio >= (float)10){
        // calcular la cantidad de monedas de 10 se le daran al usuario
        iMonedasDiez = fCambio / 10;
        printf("La cantidad de monedas de 10 son: %d\n", iMonedasDiez);
        // decrementar el valor del cambio en base a las monedas de 10 otorgadas
        fCambio = fCambio - (iMonedasDiez * 10);
    }

    if(fCambio >= (float)5){
        // calcular la cantidad de monedas de 5 que se le daran al usuario
        iMonedasCinco = fCambio / 5;
        printf("La cantidad de monedas de 5 son: %d\n", iMonedasCinco);
        // decrementar el valor del cambio en base a las monedas de 5 otorgadas
        fCambio = fCambio - (iMonedasCinco * 5);
    }

    if(fCambio >= (float)2){
        // calcular la cantidad de monedas de 2 que se le daran al usuario
        iMonedasDos = fCambio / 2;
        printf("La cantidad de monedas de 2 son: %d\n", iMonedasDos);
        // decrementar el valor del cambio en base a las monedas de 2 otorgadas
        fCambio = fCambio - (iMonedasDos * 2);
    }

    if(fCambio >= (float)1){
        // calcular la cantidad de monedas de 1 que se le daran al usuario
        iMonedasPeso = fCambio / 1;
        printf("La cantidad de monedas de 1 son: %d\n", iMonedasPeso);
        // decrementar el valor del cambio en base a las monedas de 1 otorgadas
        fCambio = fCambio - (iMonedasPeso * 1);
    }

    // pausando el programa para visualizar su salida
    //getch(); // descomentar la linea para OS windows
    return 0;
}

