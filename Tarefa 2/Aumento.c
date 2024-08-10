#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double salarioAtual, salarioAumento;
    scanf("%lf", &salarioAtual);
    
    if (salarioAtual >= 300 && salarioAtual < 500){
        salarioAumento = salarioAtual*1.07;
    }
    
    else if (salarioAtual >= 500){
        salarioAumento = salarioAtual*1.10;
    }
    
    else {
        salarioAumento = salarioAtual*1.05;
    }
    
    printf("%.2lf", salarioAumento);
    
	return 0;
}