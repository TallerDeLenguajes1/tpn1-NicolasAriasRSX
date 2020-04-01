#include<stdio.h>
#include<ctype.h>

int Cuadrado(int Num);
void Cuadrado2(int a, int * cuad);
void Invertir(int * a, int * b);

int main(){
    int a;
    int Res;
    int prim, seg;
   
    printf("Ingrese un numero\n");
    scanf("%d",&a);
    getchar();

    printf("\nEl cuadrado de su numero es: %d\n\n", Cuadrado(a));
    Cuadrado2(a, &Res);
    printf("Elcuadrado del numerom metodo 2 es: %d\n", Res);

    printf("\nEl valor de la variable es:%d",a);
    printf("\nLa direccion de la variable es: %p", &a);

    printf("\n\nIngrese el primer numero");
    scanf("%d",&prim);
    printf("\nInegrese el sedundo numero");
    scanf("%d",&seg);

    Invertir(&prim,&seg);
    getchar();

    printf("\n1: %d",prim);
    printf("\n2: %d",seg);


    getchar();

    return 0;
}

int Cuadrado(int Num){
    int cuad;
    cuad= Num * Num;

    return cuad;
}

void Cuadrado2(int a, int * cuad){

    *cuad= a * a;

    return;
}

void Invertir(int *a, int *b){

    int c;

    c= *b;
    *b= *a;
    *a= c;

    return;
}