#include <stdio.h>
#include <stdbool.h> 
#include <assert.h>


int main(){

    int x, y, X, Y, e1,e2; // aux para que guarde el valor de X /---/ X Y para chequear la pre y post condicion
    
    printf("Ingrese un valor para x: ");
    scanf("%d",&X);
    
    printf("Ingrese un valor para y: ");
    scanf("%d",&Y);

    x = X;
    y = Y;

    /* ----Precondicion---- */
    assert( x == X && y == Y);

    e1 = x + 1;
    e2 = x + y;

    /* ----Postcondicion---- */
    assert( e1 == X + 1 && e2 == X+Y);

    printf("El estado final es:x=%d, y=%d", e1,e2);

    return 0;
}