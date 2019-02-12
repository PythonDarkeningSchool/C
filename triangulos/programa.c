#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // esta libreria contiene la funcion "isdigit"
//#include <conio.h> // desconmentar esta linea para OS Windows


int main()
{
    // declarando las variables
    char iLadoA, iLadoB, iLadoC;
    int bandera = 0;

    /* se necesita poner un espacio en blanco cuando se escanea un tipo de dato
       tipo char */
    printf("Ingresa el valor del lado A: ");
    scanf(" %c", &iLadoA);
    printf("ingresa el valor del lado B: ");
    scanf(" %c", &iLadoB);
    printf("ingresa el valor del lado C: ");
    scanf(" %c", &iLadoC);

    // Validando si los datos entrados son numeros
    if(!isdigit(iLadoA)){
        printf("\n El valor del lado A NO es digito!\n");
        // seteando la bandera con salida 1 para salir del programa
        bandera = 1;
    }

    if(!isdigit(iLadoB)){
        printf(" El valor del lado B NO es digito!\n");
        // seteando la bandera con salida 1 para salir del programa
        bandera = 1;
    }

    if(!isdigit(iLadoC)){
        printf(" El valor del lado C NO es digito!\n");
        // seteando la bandera con salida 1 para salir del programa
        bandera = 1;
    }

    if (bandera == 1) {
        printf("\n Saliendo del programa\n\n");
        exit(1);
    }

    // haciendo comparaciones para obtener el tipo de triangulo y mostrarlo al usuario
    if (iLadoA == iLadoB && iLadoA == iLadoC && iLadoB == iLadoC){
        printf("Es un triangulo Equilatero \n");
    }
    else if(iLadoA == iLadoB != iLadoC|| iLadoA == iLadoC != iLadoB|| iLadoB == iLadoC != iLadoA){
            printf("Es un triangulo Isoceles \n");
    }
    else if(iLadoA != iLadoB && iLadoA!= iLadoC && iLadoB != iLadoC){
            printf("Es un triangulo Escaleno \n");
    }    
    
    // generando una pausa para el programa
    //getch(); // descomentar esta linea para OS windows
    return 0;
}
