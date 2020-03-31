#include<stdio.h>

int main(){

    int Num= 100;
    int *pNum= &Num;

    printf("El contenido del puntero: %d\n", *pNum);

    printf("La direccion de memoria almacena por el puntero: %p\n", pNum);

    printf("La direccion de memoria de la variable: %p\n", &Num);

    printf("La direccion de memoria del puntero: %p\n", &pNum);

    printf("El tamanio de la variable Num: %d", sizeof(Num));

    getchar();

    return 0;
}