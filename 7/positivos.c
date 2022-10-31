#include <stdio.h>
#include <assert.h>
#include <stdbool.h> 
#define N 5

bool existe_positivos (int a[], int tam){
    
    int i = 0;
    while(i <= tam){
        if( a[i] >= 0 ){
            return 1;
        }else{
            i = i + 1;
        }
    }
    return 0; // como se va a ejecutar el while hasta que termine, si encuentra alguno va a retornar true. Pero si termina y no encuentra ninguno va a salir del while y retornara false
}

bool todos_positivos (int a[], int tam){
    
    int contador = 0;
    int i = 0;
    while( i<=tam ){
        if( a[i] >= 0 ){
            contador = contador + 1;
        }else{
            return 0;
        }
            if(contador == tam){
                return 1;
            }
            i = i + 1;
    }
}

int main(){

    int a[N];
    int opcion;

    int n = 0;
    while (n <= N){
        printf("Ingrese %d valores para el arreglo: ",N);
        scanf("%d", &a[n]);
        n = n + 1;
    }

    printf("Ingrese 1 para saber saber si existe algun numero positivo en el arreglo.\n");
    printf("Ingrese 2 para saber saber si todos los elementos del arreglo son positivos:\n ");
    scanf("%d",&opcion);    

    if(opcion == 1 ){
        
        if(existe_positivos(a,N)){
            printf("Existe al menos un numero positivo en el arreglo");
        }else{
            printf("No existe ningun numero positivo en el arreglo");
        }
    }else if (opcion == 2){
        
        if(todos_positivos(a,N)){
            printf("Todos los numeros del arreglo son positivos");
        }else{
            printf("No todos los elementos del arreglo son positivos");
        }
    }else{
        printf("Opcion no valida");
    }

    return 0;
}