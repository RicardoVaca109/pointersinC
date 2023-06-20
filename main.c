#include <stdio.h>

int main (int argc, char *argv[]) {
    float *puntero1, *puntero2;
    float aux = 30;
    puntero1 = &aux;
    puntero2 =&aux;
    printf("EL VALOR DE AUX ES: %f\n", aux);
    printf("La ubicacion de aux en memoria es: %p\n", &aux);
    printf("El contenido del puntero1: %f\n", *puntero1); //se usa "*" para saber el contenido del puntero
    printf("La ubicacion de memoria del puntero1 es: %p\n", puntero1); //sin "*" se sabe la ubicacion exacta del puntero en memoria

    //cambiar valor
    *puntero1=100;
        printf("-----------------------------\n");
        printf("El valor aux es: %f\n", aux);
    *puntero2=300;
        printf("-----------------------------\n");
        printf("EL VALOR DE AUX ES: %f\n", aux);
    
    return 0;
}