#include <stdio.h>
#include <stdbool.h> 
#include <assert.h>

void holaHasta(int n){

    while( n > 0 ){
        printf("Hola\n");
        n--;
    }
}

int main() {
    int nInput;
    
    printf("Ingrese un numero: ");
    scanf("%d",&nInput);

    assert(nInput > 0);
    holaHasta(nInput);

    return 0;
}