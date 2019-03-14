// C program to generate random numbers
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

// Driver program
int main(void)
{
    // This program will create different sequence of
    // random numbers on every program run

    // Use current time as seed for random generator
    srand(time(0));

    int usuario, bot, status, contador_usuario = 0, contador_bot = 0;
    char usuario_eleccion[50], bot_eleccion[50];

    // mientras no gane el usuario o el bot el programa continuara
    while(1){
        // mostrando el marcador actual
        printf("\======================\n");
        printf("=> Marcador actual <=\n");
        printf("Usuario: [%d]\n", contador_usuario);
        printf("Bot: [%d]\n", contador_bot);
        printf("\======================\n\n");

        if( (contador_usuario == 3) || (contador_bot == 3) ){
            break;
        }

        // menu
        printf("Juego de Piedras|Papel|Tijeras\n\n");
        printf("1. Piedra \n");
        printf("2. Papel \n");
        printf("3. Tijeras \n");
        printf("4. Salir \n\n");
        printf("Cual es tu eleccion?: ");
        scanf("%d", &usuario);

        // El usuario eligio la opcion 4, terminando el programa
        if(usuario == 4){
            printf("\n\nSaliendo del programa ...\n\n");
            exit(0);
        }
        /*else if( (usuario!=1) || (usuario!=2) || (usuario!=3) ) {
            printf("usuario: %d", usuario);
            printf("\n\nOpcion (%d) invalida...\n\n", usuario); // el programa continua
        }*/
        else{
            // Empieza el juego
            bot = rand() % 4;

            // Checar si el bot da 0 se incrementa 1 para seguir con el programa
            if(bot == 0){
                bot += 1;
            }

            // Hacemos las comparaciones de usuario vs el bot
            if( (usuario == 1) && (bot == 1) ){
                status = 0; // empate
            }
            else if( (usuario == 2) && (bot == 1) ){
                status = 1; // gana el usuario
            }
            else if( (usuario == 3) && (bot == 1) ){
                status = 2; // gana el usuario
            }
            else if( (usuario == 1) && (bot == 2) ){
                status = 2; // gana el usuario
            }
            else if( (usuario == 2) && (bot == 2) ){
                status = 0; // gana el usuario
            }
            else if( (usuario == 3) && (bot == 2) ){
                status = 1; // gana el usuario
            }
            else if( (usuario == 1) && (bot == 3) ){
                status = 1; // gana el usuario
            }
            else if( (usuario == 2) && (bot == 3) ){
                status = 2; // gana el usuario
            }
            else if( (usuario == 3) && (bot == 3) ){
                status = 0; // gana el usuario
            }

            // imprimiendo al ganador
            if( usuario == 1){
                strcpy(usuario_eleccion,"Piedra");
            }
            else if ( usuario == 2){
                strcpy(usuario_eleccion,"Papel");
            }
            else if ( usuario == 3){
                strcpy(usuario_eleccion,"Tijeras");
            }

            if( bot == 1){
                strcpy(bot_eleccion,"Piedra");
            }
            else if ( bot == 2){
                strcpy(bot_eleccion,"Papel");
            }
            else if ( bot == 3){
                strcpy(bot_eleccion,"Tijeras");
            }

            printf("\n\nUsuario eleccion:  (%s)\n", usuario_eleccion);
            printf("bot eleccion: (%s)\n", bot_eleccion);
            if(status == 0){
                printf("=============\n");
                printf("Es un empate!\n");
                printf("=============\n\n");
            }
            else if(status == 1){
                    printf("=============\n");
                    printf("El usuario gana!\n");
                    printf("=============\n\n");
                    contador_usuario ++;
            }
            else if(status == 2){
                    printf("=============\n");
                    printf("El bot gana!\n");
                    printf("=============\n\n");
                    contador_bot ++;
            }
        }
    }
    return 0;
}
