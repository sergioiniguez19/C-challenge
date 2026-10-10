//
// Created by inigu on 10/10/2026.
//
#include <stdio.h>
#include <stdlib.h>

struct Videojuego{
    char titulo[50];
    int year;
};


int main() {

    struct Videojuego *juego = malloc(sizeof(struct Videojuego));

    if (juego == NULL) {
        return 1;
    };

    printf("Introduceme un titulo para el videojuego: ");
    scanf("%s", &juego->titulo);
    printf("Introduceme un titulo para el videojuego: ");
    scanf("%i",&juego->year);

    printf("El nombre del juego introducido es: %s \n", juego->titulo);
    printf("El year del juego introducido es: %i \n", juego->year);

    free(juego);
    juego = NULL;
}