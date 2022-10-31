#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

bool esPrimo(int numero){ // un numero es primo cuando tiene dos divisores, el 1 y el mismo;
    int i = 1;//tiene que empezar en 1 porque n%0 = 0, ademas 0 solo divide al cero => 0|5 => 5 != 0*alguien
    int counter = 0;

    while(i <= numero){
        if( numero % i == 0){
            counter++;
        }
        i++;
    }

    if(counter == 2){
        return 1;
    }else{
        return 0;
    }
}

int nesimo_primo(int N){
    int i = 0;
    int nesimoPrimo; // porque el primo mas chico es 2
    while(i<N){
        if(esPrimo(i)){
            nesimoPrimo = i;
        }
            i++;
    }
    return nesimoPrimo;
}

int main(){

    int num;
    
    printf("Ingrese un numero: ");
    scanf("%d",&num);
    while(num < 0 ){
        printf("Debe ingresar un numero positivo: ");
        scanf("%d",&num);
    }
    
    printf("El n-esimo primo es: %d", nesimo_primo(num));

    return 0;
}