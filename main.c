#include <stdio.h>


int main() {

    int array[8];
    int *numeros = array;
    int sum;

    for (int i = 0; i < 8; i++) {
        printf("Introduzca el numero[%d]: ", i);
        scanf("%d", &array[i]);

    }



    printf("LISTA DE NUMEROS LEIDOS \n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", *(numeros + i));
    }



}
