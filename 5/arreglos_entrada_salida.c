#include <stdio.h>
#include <assert.h>

void pedirArrreglo(int a[], int n_max){
    int i = 0;
    while(i<n_max){
        printf("Ingrese el elemento %d del arreglo: ",i);
        scanf("%d",&a[i]);
        i++;
    }
}

void imprimeArreglo(int a[], int n_max){
    int i = 0;
    printf("Arreglo: ");
    while(i<n_max){
        printf("%d ",a[i]);
        i++;
    }
}


int main(){
    int tam;
    printf("Ingrese el tamanio del arreglo: ");
    scanf("%d",&tam);

    int a[tam];

    pedirArrreglo(a,tam);
    imprimeArreglo(a,tam);


    return 0;
}