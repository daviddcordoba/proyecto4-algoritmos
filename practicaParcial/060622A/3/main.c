#include <stdio.h>
#define N 5
typedef struct {
    int n_pares;
    int n_impares;
}paridad_t;

paridad_t contar_paridad(int a[],int tam){
    paridad_t contador;
    contador.n_impares = 0;
    contador.n_pares = 0;

    int i = 0;
    while(i < tam){
        if(a[i] % 2 == 0){
            contador.n_pares++;
        }else{
            contador.n_impares++;
        }
        i++;
    }
    return contador;
}


int main(){
    paridad_t resultado;
    int a[N],i = 0;

    while ( i < N ) {
	    printf("Ingrese el elemento %d del arreglo:\n",i);
	    scanf("%d",&a[i]);
	    i=i+1;
    }
    resultado = contar_paridad(a,N);
    printf("Pares:%d",resultado.n_pares);
    printf("\nImpares:%d",resultado.n_impares);
    return 0;
}