#include <stdio.h>
#include <math.h>
#include "funciones.h"
int main (int argc, char *argv[]) {
    float puntos [4][4] = {{0,0,0},{3,0,0},{0,0,3},{1,7,1}};
    float per,a,b,c,d,e,f,h,alt;
    
    
    float perimetro = calcularPerimetro(puntos,&a,&b,&c,&d,&e,&f);
    float area1 = calcularArea(a,b,c);
    float area2 = calcularArea(b,d,e);
    float area3 = calcularArea(a,e,f);
    float area4 = calcularArea(e,f,a);

    float areaSuperf = area1+area2+area3+area4;
    printf("El perimetro  es: %f\n", perimetro);
    printf("El area superficial es: %f\n", areaSuperf);

    float volumen = calcularVolumen(puntos,a);
    printf("la Altura es: %f\n", volumen);

    
    return 0;
}
