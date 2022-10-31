#include <stdio.h>
#define N 5

struct datos_t {
    float maximo;
    float minimo;
    float promedio;
};

struct datos_t stats(float a[], int tam){

    struct datos_t calc;
    calc.maximo = a[0];
    calc.minimo = a[0];
    calc.promedio;

    float suma = 0;
    int i = 0;
    while( i < tam){
        if( a[i] < calc.minimo ){
            calc.minimo = a[i];
        }
        if(a[i] > calc.maximo){
            calc.maximo = a[i];
        }

        suma = suma + a[i];
        i = i + 1;
    }

    calc.promedio = suma/tam;

    return calc;
    
};



int main(){
    int i = 0,elem;
    float a[N];

    while ( i < N ) {
	    printf("Ingrese el elemento %d del arreglo:\n",i);
	    scanf("%f",&a[i]);
	    i=i+1;
    }

    struct datos_t calc;
    calc = stats(a,N);
    printf("El minimo elemento del arreglo es %f\n",calc.minimo);
    printf("El mayor elemento del arreglo es %f\n", calc.maximo);
    printf("El promedio de los elementos es %f\n", calc.promedio);


    return 0;
}