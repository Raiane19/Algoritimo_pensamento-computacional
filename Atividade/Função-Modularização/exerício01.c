#include <stdio.h>

int somar(int a, int b){
    int resultado = a + b;
    return resultado;
}

int main(){
    int total;
    
    total = somar(10,5);
    
    printf("Resultado: %d\n", total);

    return 0;
}
