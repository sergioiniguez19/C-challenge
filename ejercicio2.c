//
// Created by inigu on 10/9/2026.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {


    int longitud = 5;
    char car;
    char newchain;
    char *cadena = calloc(longitud,sizeof(cadena));

    printf("INTRODUZCA LA CADENA DE CARACTERES: ");
    scanf("%s", &newchain);
    printf("Longitud de caracteres: %s", strlen(*newchain));

    //printf("Caracter: %c\n", cadena[11]);
    //printf("QUE CARACTER DESEA BUSCAR: ");
    //scanf("%c", &car);

    /*for (int i = 0; i < strlen(*cadena); i++) {
        printf("%s\n", (cadena+i));
    };*/




}
