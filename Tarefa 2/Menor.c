#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int numero1, numero2, numero3, menorNumero;
    
    scanf("%d", &numero1);
    scanf("%d", &numero2);
    scanf("%d", &numero3);
    
    if (numero1 <= numero2 && numero1 <= numero3){
        menorNumero = numero1;
    }
    
    else if (numero2 <= numero1 && numero2 <= numero3){
        menorNumero = numero2;
    }
    
    else{
        menorNumero = numero3;
    }
    
    printf("%d", menorNumero);
    
	return 0;
}