#include <stdio.h>
#define N 5

struct comp_t
{
    int menores;
    int iguales;
    int mayores;
};

struct comp_t cuantos(int a[], int tam, int elem)
{
    struct comp_t counter;
    counter.menores = 0;
    counter.mayores = 0;
    counter.iguales = 0;

    int i = 0;
    while( i < tam){
        if(a[i] == elem){
            counter.iguales++;
        }else{
            if(a[i] < elem){
                counter.menores++;
            }else{
                counter.mayores++;
            }
        }
        i = i + 1;
    }
    return counter;
};


int main(void) {
    int i = 0,elem;
    int a[N];

    while (i<N) {
	    printf("Ingrese el elemento %d del arreglo:\n",i);
	    scanf("%d",&a[i]);
	    i=i+1;
    }

    printf("Ingrese el elemento a comparar: ");
    scanf("%d",&elem);

    struct comp_t counter;
    counter = cuantos(a,N,elem);
    printf("Hay %d elementos menores a %d\n", counter.menores, elem);
    printf("Hay %d elementos mayores a %d\n", counter.mayores, elem);
    printf("Hay %d elementos iguales a %d\n", counter.iguales, elem);

    return 0;
}