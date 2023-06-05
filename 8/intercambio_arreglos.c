#include <stdio.h>
#include <assert.h>
#include <stdbool.h> 
#define N 5

void intercambiar(int a[], int tam, int i, int j){
    int aux;
    aux = a[i];
    a[i] = a[j];
    a[j] = aux; 
}

int main(){

    int a[N];

    int n = 0;
    while( n < N )
    {
        printf("Ingrese 5 valores para el arreglo: \n");
        scanf("%d", &a[n]);
        n = n + 1;
    }

    int i,j;
    printf("Ingrese la posicion i que desea intercambiar: ");
    scanf("%d",&i);
    printf("Ingrese la posicion j que desea intercambiar: ");
    scanf("%d",&j);
    
    if( (i>=0 && i < N) && (j>=0 && j < N) ){

        intercambiar(a, N, i, j);

        int m = 0;
        printf("El arreglo es: ");
        while (m < N )
        {
            printf("%d ",a[m]);
            m = m + 1;
        }
    }else{
        printf("Los valores de posicion no estan en el rango.");
    }
    
    return 0;
}