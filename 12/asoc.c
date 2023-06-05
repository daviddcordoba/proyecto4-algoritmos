#include <stdio.h>
#include <stdbool.h>
#define N 5

typedef char clave_t;// al tipo char ahora le vamos a decir clave_t
typedef int valor_t;

typedef struct{
    clave_t clave; // char clave
    valor_t valor; // int valor
}asoc;

bool asoc_existe(asoc a[], int tam, clave_t c){
    int i = 0;
    while( i < tam ){
        if(a[i].clave == c){
            return 1;
        }else{
            i++;
        }
    }
    return 0;
};

int main(){
    asoc a[N];
    // aca tengo que pedir la clave antes por la misma razon de  abajo 
    clave_t key;
    printf("Que clave desea consultar? ");
    scanf("%c",&key);

    int i = 0;
    while( i < N){
        printf("Ingrese altura y clave: ");
        scanf("%d _%c",&a[i].valor,&a[i].clave); // tuve que hacerlo asi porque si pedia la clave que es un char despues del entero porque me iba tomar el 'enter' como "\n" y no me dejaba ingresar una letra
        printf("\n");
        i++;
    }

    
    
    
    if(asoc_existe(a,N,key)){
        printf("La clave existe");
    }else{
        printf("La clave no existe");
    }

    return 0;
}

/*
community material theme ocean high contrast ++

 */

