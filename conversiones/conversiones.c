#include <stdio.h>
#include <stdlib.h>


void obtener_binario(int decimal){
    int binario[10], contador=1;

    while (decimal =! 0){
        if(decimal % 2 == 0){
            printf("0");
        }
        else{
            printf("1");
        }
        decimal = decimal / 2;
        printf("\n decimal: %d", decimal);
        //binario[contador++] = decimal % 2;
        //decimal = decimal / 2;
    }
    return binario;
}

int main(){
    int decimal, binario[10], contador = 0;

    printf("\n\nIngresa el valor en sistema decimal: ");
    scanf("%d", &decimal);

    obtener_binario(decimal);

return 0;
}
