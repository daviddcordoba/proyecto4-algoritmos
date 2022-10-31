#include <stdio.h>
#include <stdbool.h> 
#include <assert.h>

int main(){
    int x,y,min;

    printf("Ingrese un valor para x: ");
    scanf("%d",&x);

    printf("Ingrese un valor para y: ");
    scanf("%d",&y);

    if( x >= y){
        min = x; // si llegara a ser igual el min = x = y
    }
    else{
        min = y; 
    }

    assert(min == x || min == y);
    printf("El minimo entre %d y %d es %d",x,y,min);
    

    return 0;
}