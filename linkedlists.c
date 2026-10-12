//
// Created by sergioiniguez on 10/12/26.
//
#include <stdio.h>
#include <stdlib.h>


struct Nodo {
    int dato;
    struct Nodo *siguiente;
};

int main() {

    struct Nodo *head = malloc(sizeof(struct Nodo));

    if ( head == NULL ) {
        return 1;
    };

    head->dato = 1;
    head->siguiente = NULL;

    //Crear segundo nodo para la lista

    struct Nodo *segundoN = malloc(sizeof(struct Nodo));
    if (segundoN == NULL) {
        return 1;
    };

    segundoN->dato = 2;
    segundoN->siguiente = NULL;
    head->siguiente = segundoN;
    printf("El dato de head es: %d \n", head->dato);
    printf("El dato de segundoN es: %d \n", head->siguiente->dato);



    free(head);
    free(segundoN);
    head = NULL;

    return 0;
}