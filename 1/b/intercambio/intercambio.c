#include <stdio.h>
#include <stdbool.h> 
#include <assert.h>

int main(){

    int x, y, z, Xinput, Yinput, Zinput, e1,e2,e3; //  X, Y, Z para chequear la pre y post condicion // e1,e2,e3  para guardar los resultados de las operaciones
    
    printf("Ingrese un valor para x: ");
    scanf("%d",&Xinput);
    
    printf("Ingrese un valor para y: ");
    scanf("%d",&Yinput);

    printf("Ingrese un valor para z: ");
    scanf("%d",&Zinput);

    x = Xinput;
    y = Yinput;
    z = Zinput;

    /* ----Precondicion---- */
    assert( x == Xinput && y == Yinput && z == Zinput);

    e1 = y;
    e2 = z;
    e3 = x;

    /* ----Postcondicion---- */
    assert( e1 == Yinput && e2 ==  Zinput && e3 ==  Xinput);

    printf("Los estados finales son:  x=%d, y=%d, z=%d ",e1,e2,e3);

    return 0;
}