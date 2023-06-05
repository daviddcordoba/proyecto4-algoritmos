#include<stdio.h>
#include <assert.h>


int main(){
    int r,s,rInput,sInput;

    printf("Ingrese el valor para r: ");
    scanf("%d",&rInput);
    printf("Ingrese el valor para s: ");
    scanf("%d",&sInput);

    r = rInput;// X = x
    s = sInput;// Y = y 
                                        // X > Y
    assert( r == rInput && s == sInput && s > r);

    rInput = s-r;
    sInput = r + s;

    assert(rInput == s - r && sInput == r+s );
    printf("r=%d",rInput);
    printf("s=%d",sInput);

    return 0;
}