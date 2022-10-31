#include <stdio.h>
#include <stdbool.h> 
#include <assert.h>

int suma_hasta(int N){ 
    return N*(N+1)/2; 
}

int main(){
    int nInput;

    printf("Ingrese un valor para N: ");
    scanf("%d",&nInput);

    assert( nInput > 0 && "Debe ingresar un numero positivo.."); // Se despliega el msj de la izq de && si la guarda es false 

    printf("La suma de los primeros N elementos es: %d",suma_hasta(nInput));

    return 0;
}
    /* for(int i = 0; i<=N; i++){
        suma = suma + i;
    } */     