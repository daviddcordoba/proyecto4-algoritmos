#include <stdio.h>
#include <assert.h>



int pedirEntero(){
    int x;
    scanf("%d",&x);
    return x;
}

void imprimeEntero(int a){
    printf("%d",a);
 }

int main(){

    int x,y,z,X,Y,Z;

    printf("x: ");
    x = pedirEntero();
    printf("y: ");
    y = pedirEntero();
    printf("z: ");
    z = pedirEntero();

    X = x; // X = x = 2
    Y = y; // Y = y = 4
    Z = z; //  Z = z = 1
    
    assert( x == X && y == Y && z == Z && X != 0 && Y%X==0  ); // precondicion

    x = Y/X; // x =4/ 2 = 2
    y = Y+Z; // y = 4+1 = 5
    z = X*Y; // z = 4*2 = 8


    printf("x: ");
    imprimeEntero(x);
    printf("y: ");
    imprimeEntero(y);
    printf("z: ");
    imprimeEntero(z);

    assert(( x == Y/X) && (y == Y+Z) &&( z == X*Y));// postcondicion
    return 0;
}