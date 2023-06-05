#include <stdio.h>
#include <stdbool.h> 
#include <assert.h>


int main(){

    int x, y, z, Xinput, Yinput, Zinput; 
    
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

    x = Yinput;
    y = Yinput + Xinput + Zinput;
    z = Yinput + Xinput;

    /* ----Postcondicion---- */
    assert( x == Yinput && y == Yinput + Xinput + Zinput && z == Yinput + Xinput);

    printf("Los estados finales son:  x=%d, y=%d, z=%d ",x,y,z);

    return 0;
}