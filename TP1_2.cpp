#include<stdio.h>
#include<ctype.h>

int Cuadrado(int Num);
void Cuadrado2(int a, int * cuad);
int main(){
    int a;
    int Res;
   
    printf("Ingrese un numero\n");
    scanf("%d",&a);
    getchar();

    printf("\nEl cuadrado de su numero es: %d\n\n", Cuadrado(a));
    Cuadrado2(a, &Res);
    printf("Elcuadrado del numerom metodo 2 es: %d\n", Res);



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