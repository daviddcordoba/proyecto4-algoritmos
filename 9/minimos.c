#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <limits.h>
#define N 5

int minimo_pares(int a[], int tam){
    
    int minimoPares = INT_MIN;

    int i = 0;
    while ( i < tam)
    {
        if( a[i] % 2 == 0){
            if(a[i] <= minimoPares){
                minimoPares = a[i];
            }
        }
            i = i + 1;  
    }

    return minimoPares;
}

int minimo_impares(int a[], int tam){
    int minimoImpares = INT_MIN;
    int i = 0;
    while ( i < tam)
    {
        if( a[i] % 2 != 0 ){
            if(a[i] <= minimoImpares){
                minimoImpares = a[i];
            }
        }
        i = i + 1;
    }

    return minimoImpares;
}

int main(){

    int a[N],pares[N];

    int n = 0;
    while( n < N )
    {
        printf("Ingrese 5 valores para el arreglo: \n");
        scanf("%d", &a[n]);
        n = n + 1;
    }

    printf("El minimo valor par es: %d", minimo_pares(a,N));
    printf("El minimo valor impar es: %d", minimo_impares(a,N)); 

    return 0;
}
