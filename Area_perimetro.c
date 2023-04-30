#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592
void cirar(float radio){
    float arcir;
    arcir= PI*pow(radio, 2);
    printf("El area del circulo es %.2f u^2\n\n", arcir);
}
void cirper(float radio){
    float percir;
    percir= 2*PI*radio;
    printf("El perimetro del circulo es %.2f u\n", percir);
    cirar(radio);
}
void circulo(){
    float radio;
    do
    {
    printf("Ingrese el radio del circulo\n");
    scanf("%f", &radio);
    if (radio<=0)
    {
        printf("Ingrese una medida real para una figura geometrica\n");
    }
    } while (radio<=0);
    cirper(radio);
}
void trirar(float base, float altura){
    float artri;
    artri= (base*altura)/2;
    printf("El area del triangulo es %.2f u^2\n\n", artri);
}
void triper(float base, float altura){
    float pertri;
    pertri= base+base+base;
    printf("El perimetro del triangulo es %.2f u\n", pertri);
    trirar(base, altura);
}
void triangulo(){
    float base, altura;
    do
    {
     printf("Ingrese la base del triangulo\n");
    scanf("%f", &base);
    if (base<=0)
    {
        printf("Ingrese una medida real para una figura geometrica\n");
    }
    } while (base<=0);
    do
    {
    printf("Ingrese la altura del triangulo\n");
    scanf("%f", &altura);
    if (altura<=0)
    {
        printf("Ingrese una medida real para una figura geometrica\n");
    }
    } while (altura<=0);
    triper(base, altura);
}
void recar(float l1, float l2){
    float arrec;
    arrec= l1*l2;
    printf("El area del rectangulo es %.2f u^2\n\n", arrec);
}
void recper(float l1, float l2){
    float perrec;
    perrec= l1+l1+l2+l2;
    printf("El perimetro del rectangulo es %.2f u\n", perrec);
    recar(l1, l2);
}
void rectangulo(){
    float l1, l2;
    do
    {
    printf("Ingrese el lado 1 del rectangulo\n");
    scanf("%f", &l1);
    if (l1<=0)
    {
        printf("Ingrese una medida real para una figura geometrica\n");
    }
    } while (l1<=0);
    do
    {
    printf("Ingrese el lado 2 del rectangulo\n");
    scanf("%f", &l2);
    if (l2<=0)
    {
        printf("Ingrese una medida real para una figura geometrica\n");
    }
    } while (l2<=0);
    recper(l1, l2);
}
void cuaar(float lcua){
    float arcua;
    arcua= lcua*lcua;
    printf("El area del cuadrado es %.2f u^2\n\n", arcua);
}
void cuaper(float lcua){
    float percua;
    percua= lcua*4;
    printf("El perimetro del cuadrado es %.2f u\n", percua);
    cuaar(lcua);
}
void cuadrado(){
    float lcua;
    do
    {
    printf("Ingrese el lado del cuadrado\n");
    scanf("%f", &lcua);
    if (lcua<=0)
    {
        printf("Ingrese una medida real para una figura geometrica\n");
    }
    } while (lcua<=0);
    cuaper(lcua);
}
void traar(float base1, float base2, float altura){
    float artra;
    artra= ((base1+base2)/2)*altura;
    printf("El area del trapecio es %.2f u^2\n\n", artra);
}
void traper(float base1, float base2, float lado, float altura){
    float pertra;
    pertra= base1+base2+lado+lado;
    printf("El perimetro del trapecio es %.2f u\n", pertra);
    traar(base1, base2, altura);
}
void trapecio(){
    float base1, base2, lado, altura;
    do
    {
    printf("Ingrese la primera base del trapecio\n");
    scanf("%f", &base1);
    if (base1<=0)
    {
        printf("Ingrese una medida real para una figura geometrica\n");
    }
    } while (base1<=0);
    do
    {
    printf("Ingrese la segunda base del trapecio\n");
    scanf("%f", &base2);
    if (base2<=0)
    {
        printf("Ingrese una medida real para una figura geometrica\n");
    }
    } while (base2<=0);
    do
    {
    printf("Ingrese el lado del trapecio\n");
    scanf("%f", &lado);
    if (lado<=0)
    {
        printf("Ingrese una medida real para una figura geometrica\n");
    }
    } while (lado<=0);
    do
    {
    printf("Ingrese la altura del trapecio\n");
    scanf("%f", &altura);
    if (altura<=0)
    {
        printf("Ingrese una medida real para una figura geometrica\n");
    }
    } while (altura<=0);    
    traper(base1, base2, lado, altura);
}
void menu(int op){
    switch (op)
    {
    case 1:
        circulo();
        break;
    case 2:
        triangulo();
        break;
    case 3:
        rectangulo();
        break;
    case 4:
       cuadrado();
        break;
    case 5:
        trapecio();
        break;
    case 6:
        printf("Que tenga un lindo dia\n\n");
        exit(0);
    default:
    printf("Error, opcion invalida, intentelo nuevamente\n");
        break;
    }
}
int main(){
    int op;
    while (op!=6)
    {
    printf("Elija la figura geometrica para realizar el calculo del perimetro y el area\n");
    printf("1. Circulo\n");
    printf("2. Triangulo\n");
    printf("3. Rectangulo\n");
    printf("4. Cuadrado\n");
    printf("5. Trapecio\n");
    printf("6. Salir\n");
    scanf("%d", &op);
    menu(op);
    }
}