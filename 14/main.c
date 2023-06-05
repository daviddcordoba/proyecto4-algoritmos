#include <stdio.h>

typedef struct _persona{
    char *nombre;
    int edad;
    float altura;
    float peso;
}persona_t;

float peso_promedio( persona_t arr[],int longitud){
    int i = 0;
    float _pesopromedio = 0.;
    while(i<longitud){
        _pesopromedio += arr[i].peso;
        i++;
    }

    _pesopromedio = _pesopromedio/longitud;

    return _pesopromedio;
}

persona_t persona_de_mayor_edad( persona_t arr[], unsigned int longitud){
    
    persona_t persona_mayor;
    persona_mayor.edad = arr[0].edad;
    persona_mayor.nombre =arr[0].nombre;
    
    int i = 1;
    while( i < longitud){
        if(arr[i].edad > persona_mayor.edad){
            persona_mayor.edad = arr[i].edad;
            persona_mayor.nombre = arr[i].nombre;
        }
        i++;
    }
    return persona_mayor;
}

persona_t persona_de_menor_altura(persona_t arr[],unsigned int longitud){
    persona_t persona;
    persona.altura = arr[0].altura;
    persona.nombre = arr[0].nombre;

    int i = 1;
    while( i < longitud){
        if(arr[i].altura < persona.altura ){
            persona.altura = arr[i].altura;
            persona.nombre = arr[i].nombre;
        }
        i++;
    }
    return persona;
}

int main(){
    persona_t p1 = {"Paola", 21, 1.85, 75};
    persona_t p2 = {"Luis", 54, 1.75, 69};
    persona_t p3 = {"Julio", 40, 1.70, 80};
    persona_t arr[] = {p1, p2, p3};

    unsigned int longitud = 3;

    printf("El peso promedio es %f\n", peso_promedio(arr, longitud));

    persona_t p = persona_de_mayor_edad(arr, longitud);
    printf("El nombre de la persona con mayor edad es %s\n", p.nombre);

    p = persona_de_menor_altura(arr, longitud);
    printf("El nombre de la persona con menor altura es %s\n", p.nombre); 
    
    return 0;
}