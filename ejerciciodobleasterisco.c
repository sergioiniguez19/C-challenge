//
// Created by inigu on 10/17/2026.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node * next;
} node_t;


// node_t **head quiere decir que es un puntero que apunta a otro puntero que en este caso es test_list
void liberar_lista(node_t **head) {
    // Guardamos el siguiente nodo para poder borrar el primero y seguir
    node_t *siguiente = NULL;
    while ((*head) != NULL) {
        siguiente = (*head)->next;
        free(*head);
        (*head) = siguiente;
    };

    *head = NULL;

}


int main() {



    node_t * test_list = (node_t *) malloc(sizeof(node_t));
    test_list->val = 1;
    test_list->next = (node_t *) malloc(sizeof(node_t));
    test_list->next->val = 2;
    test_list->next->next = (node_t *) malloc(sizeof(node_t));
    test_list->next->next->val = 3;
    test_list->next->next->next = (node_t *) malloc(sizeof(node_t));
    test_list->next->next->next->val = 4;
    test_list->next->next->next->next = NULL;
    // Aqui no le pasamos test_list porque en la funcion estamos creando un puntero sobre puntero entonces le pasamos la direccion de test_list
    liberar_lista(&(test_list));



};