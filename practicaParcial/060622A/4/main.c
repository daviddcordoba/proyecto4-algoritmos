#include <stdio.h>
#define N 5


typedef struct{
    float altura_media;
    float altura_minima;
    float altura_maxima;
}stats_t;

typedef struct{
    int dni;
    float altura;
}persona_t;

stats_t calcular_estadisticas(persona_t a[], int tam){
    stats_t estadistica;
    estadistica.altura_maxima = a[0].altura;
    estadistica.altura_minima = a[0].altura;
    estadistica.altura_media;

    int i = 1;
    float suma = 0.0;
    while( i < tam){
        if(a[i].altura > estadistica.altura_maxima ){
            estadistica.altura_maxima = a[i].altura;
        }
        if(a[i].altura < estadistica.altura_minima){
            estadistica.altura_minima = a[i].altura;
        }
        suma += a[i].altura;

        i++;
    }

    estadistica.altura_media = (suma + a[0].altura) / tam;

    return estadistica;
}

int main(){
    persona_t a[N];
    int i = 0;
    while ( i < N ) {
	    printf("Ingrese el elemento %d del arreglo:\n",i);
	    scanf("%f",&a[i].altura);
	    i=i+1;
    }

    stats_t resultado = calcular_estadisticas(a,N);

    printf("altura max:%f",resultado.altura_maxima);
    printf("altura min:%f",resultado.altura_minima);
    printf("altura med:%f",resultado.altura_media);
    return 0;
}