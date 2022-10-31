#include <stdio.h>
#include <stdbool.h> 
#include <assert.h>


int main (){

    int xInput,abs;

    printf("Ingrese un valor para x: ");
    scanf("%d",&xInput);

    if(xInput >= 0){
        abs = xInput;
    }else{
        abs = xInput*(-1);
    }

    assert( abs >= 0); // postcondicion
    printf("El valor absoluto de %d es : %d", xInput,abs);

    return 0;
}