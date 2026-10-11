//
// Created by sergioiniguez on 10/11/26.
//
#include <stdio.h>


void recursion(int *arr, int indice, int tamano) {
    if (indice == tamano) {
        return;
    };
    printf("%d \n", arr[indice]);
    recursion(arr, indice+1, tamano);
    // printf("%d \n", arr[indice]);
};



int main() {
    int numeros[] = {10, 20, 30, 40, 50};
    int tamano = 5;
    recursion(numeros, 0, tamano);


};