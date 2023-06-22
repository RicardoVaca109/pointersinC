#include <math.h>
#include "funciones.h"
float calcularDistancia(float x1, float y1, float z1, float x2, float y2, float z2 ){
    float dist = sqrt(pow(x1-x2,2)+pow(y1-y2,2)+pow(z1-z2,2));
    return dist;
}

float calcularPerimetro(float puntos [4][4], float *a, float *b, float *c, float *d, float *e, float *f){ //paso por referencias por punteros
    *a = calcularDistancia(puntos [0][0], puntos [0][1], puntos [0][2], puntos [1][0], puntos [1][1], puntos [1][2]);
    *b = calcularDistancia(puntos [0][0], puntos [0][1], puntos [0][2], puntos [2][0], puntos [2][1], puntos [2][2]);
    *c = calcularDistancia(puntos [1][0], puntos [1][1], puntos [1][2], puntos [2][0], puntos [2][1], puntos [2][2]);

    *d = calcularDistancia(puntos [2][0], puntos [2][1], puntos [2][2], puntos [3][0], puntos [3][1], puntos [3][2]);
    *e = calcularDistancia(puntos [0][0], puntos [0][1], puntos [0][2], puntos [3][0], puntos [3][1], puntos [3][2]);
    *f = calcularDistancia(puntos [1][0], puntos [1][1], puntos [1][2], puntos [3][0], puntos [3][1], puntos [3][2]);
    float per = *a+*b+*c+*d+*e+*f;
    return per;
}
float calcularArea(float a, float b, float c){ //paso por valor sin punteros
    float s = (a+b+c)/2;
    float area = sqrt(s*(s-a)*(s-b)*(s-c)); 
    return area;
}
float calcularVolumen(float puntos [4][4], float a /*float *h*/){ 
    /*
    float barx = (puntos[0][0]+puntos[1][0]+puntos[2][0])/3;
    float bary = (puntos[0][1]+puntos[1][1]+puntos[2][1])/3;
    float barz = (puntos[0][2]+puntos[1][2]+puntos[2][2])/3;
    *h = calcularDistancia(barx, bary,barz, puntos [3][0], puntos [3][1], puntos [3][2]);
    float alt = *h;
    */
    float volumen = ((pow(a,3))*sqrt(2))/12;
    return volumen;
}