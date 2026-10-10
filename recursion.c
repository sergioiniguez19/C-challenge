//
// Created by inigu on 10/10/2026.
//
#include <stdio.h>

int sumaRecursiva(int n) {
    // Siempre tiene que haber un caso base para que la funcion pueda retornar
    if (n == 0) {
        return 0;
    };
    // Le restamos para que asi llegue al caso base
    return n + sumaRecursiva(n-1);

}

int main() {
    int resultado = sumaRecursiva(5);
    printf("La suma recursiva de 5 es: %d\n", resultado);
    return 0;
}