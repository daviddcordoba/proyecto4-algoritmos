#include <stdio.h>
#include <assert.h>
#include <limits.h>
#define N 5

int pedirEntero(){
    int x;
    scanf("%d",&x);
    return x;
}

void pedirArreglo(int a[],int tam){
    int i = 0;
    while(i<tam){
        printf("Ingresar el valor de la posicion %d: ", i);
        scanf("%d", &a[i]);
        i++;
    }
}

int multiplo_maximo(int a[], int tam, int k){
    int i = 0;

    int multiploMax = INT_MIN;
    while(i < tam){
        if(a[i] % k == 0 && a[i] > multiploMax){
            multiploMax = a[i];
        }
        i++;
    }
    return multiploMax;
}

int main(){
    int a[N],k,resultado;

    pedirArreglo(a,N);

    printf("k:");
    k = pedirEntero();

    assert(k>0);
    printf("Multiplo max: %d",multiplo_maximo(a,N,k));

    return 0;
}