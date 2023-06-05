#include <stdio.h>
#include <assert.h>
#define N 5

int suma_mayores(int a[], int tam, int k){
    int suma = 0;
    int i = 0;

    while( i < tam){
        if(a[i]>a[k]){
            suma += a[i];
        }
        i++;
    }
    return suma;
}

int main(){

    int i = 0,k;
    int a[N];
    while ( i < N ) {
	    printf("Ingrese el elemento %d del arreglo:\n",i);
	    scanf("%d",&a[i]);
	    i=i+1;
    }

    printf("Ingrese la posicion k:");
    scanf("%d",&k);

    assert( k >= 0 && k < N);

    printf("El resultado: %d",suma_mayores(a,N,k));
    return 0;
}