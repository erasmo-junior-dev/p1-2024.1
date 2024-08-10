#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int numero1, numero2, numero3;
    scanf("%d", &numero1); scanf("%d", &numero2); scanf("%d", &numero3);
    
    if (numero1 == numero2 && numero1 == numero3){
        printf("1");
    }
    
    else if (numero1 != numero2 && numero1 != numero3 && numero2 != numero3){
        printf("2");
    }
    
    else {
        printf("3");
    }
    
	return 0;
}