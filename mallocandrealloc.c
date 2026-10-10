//
// Created by inigu on 10/10/2026.
//
#include <stdio.h>
#include <stdlib.h>

struct Videojuego{
    char titulo[50];
    int year;
};

void showGames (struct Videojuego *gamePointer, int *totalgames) {
    for (int i=0; i<*totalgames; i++){
        printf("El nombre del juego introducido es: %s \n", (gamePointer+i)->titulo);
        printf("El year del juego introducido es: %i \n", (gamePointer+i)->year);
    }
};


int main() {

    int valorinicial = 0;
    int njuegos = 0;
    int nuevacapacidad = 0;
    int size;


    printf("Cuantos juegos quieres inicialmente? ");
    scanf("%i",&valorinicial);
    njuegos = valorinicial;

    struct Videojuego *videojuegos= malloc(sizeof(struct Videojuego) * valorinicial);

    if (videojuegos == NULL) {
        return 1;
    };
    // Add Games 1st time
    for (int i = 0; i < valorinicial; i++) {
        printf("VIDEOJUEGO N%i \n",i);
        printf("Introduceme un titulo para el videojuego: ");
        scanf("%s", (videojuegos+i)->titulo);
        printf("Introduceme un year para el videojuego: ");
        scanf("%i", &(videojuegos+i)->year);
    };


    printf("Quieres anadir mas juegos? (Indica cuantos mas quieres anadir)  ");
    scanf("%i",&nuevacapacidad);


    if (nuevacapacidad != 0) {
        //Si quiere mas juegos entonces tengo que realloc el espacio
        njuegos += nuevacapacidad;
        size = sizeof(struct Videojuego)*njuegos;
        struct Videojuego *temp = realloc(videojuegos,size);

        if (temp == NULL) {
            free(videojuegos);
            return 1;
        }
        videojuegos = temp;
        for (int i = valorinicial; i < njuegos; i++) {
            printf("VIDEOJUEGO N%i \n",i);
            printf("Introduceme un titulo para el videojuego: ");
            // Como titulo es un array se pone sin & ya que los arrays ya actuan como un puntero
            scanf("%s", (videojuegos+i)->titulo);
            printf("Introduceme un year para el videojuego: ");
            scanf("%i", &(videojuegos+i)->year);
        };

    }
    showGames(videojuegos,&njuegos);


    free(videojuegos);
    videojuegos = NULL;

};