#include <stdio.h>
#include <assert.h>
#define N 5

int sumatoria(int a[], int tam){

    int suma;

    for(int i = 0; i <= tam; i++){
        suma = suma + a[i];
    }

    return suma;
}

int main(){
    int i, a[N],resultado;

    i = 0;
    while( i <= N){
        printf("Ingrese %d valores para el arreglo: ",N);
        scanf("%d",&a[i]);
        i++;
    };

    resultado = sumatoria(a, N);

    printf("La suma de los valores del arreglo es: %d", resultado);
    
    return 0;
}