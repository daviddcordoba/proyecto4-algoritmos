#include <stdio.h>
#include <assert.h>

struct div_t {
    int cociente;
    int resto;
};

struct div_t division(int x, int y){ // devuelve algo del tipo struct div_t osea tengo q acceder a los valores con el .

    struct div_t res;
    
    res.cociente = 0;
    res.resto = x;

    while(res.resto >= y){
        res.cociente = res.cociente + 1;
        res.resto = res.resto - y;
    }

    return res;
}

int main() {

    int xInput,yInput;
    struct div_t coc_res;
    
    printf("Ingrese un valor para x: ");
    scanf("%d",&xInput);

    printf("Ingrese un valor para y: ");
    scanf("%d",&yInput);

    if(yInput < 0){
        printf("Debe ingresar un valor mas grande que cero");
    }else{
        coc_res = division(xInput,yInput);
        printf("El cociente es %d y el resto es %d", coc_res.cociente,coc_res.resto);
    }

    return 0;
}