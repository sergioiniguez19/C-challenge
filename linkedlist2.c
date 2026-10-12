//
// Created by inigu on 10/12/2026.
//

#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dato;
    struct Nodo *siguiente;
};

void imprimirLista(struct Nodo *head) {
    struct Nodo *actual = head;
    while (actual != NULL) {
        printf("Dato: %d \n", actual->dato);
        actual = actual->siguiente;
    };
}

int main() {
    struct Nodo *head = malloc(sizeof(struct Nodo));
    head->dato = 10;
    head->siguiente = NULL;

    struct Nodo *segundoN = malloc(sizeof(struct Nodo));
    segundoN->dato = 20;
    segundoN->siguiente = NULL;

    head->siguiente = segundoN;


    imprimirLista(head);


    free(head);
    free(segundoN);
    head = NULL;
    segundoN = NULL;

    return 0;
}