#include <stdio.h>
#include <stdbool.h> 
#include <assert.h>


int main(){

    int x, y, Xinput, Yinput ;
    
    printf("Ingrese un valor para x: ");
    scanf("%d",&Xinput);
    
    printf("Ingrese un valor para y: ");
    scanf("%d",&Yinput);

    x = Xinput;
    y = Yinput;

    /* ----Precondicion---- */
    assert( x == Xinput && y == Yinput);

    x = Xinput + 1;
    y = Xinput + Yinput;

    /* ----Postcondicion---- */
    assert( x == Xinput + 1 && y == Xinput+Yinput);

    printf("El estado final es:x=%d, y=%d", x,y);

    return 0;
}