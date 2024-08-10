#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double velocidadeMaxima, velocidadeVeiculo, taxaUltrapassagem;
    
    scanf("%lf", &velocidadeMaxima); scanf("%lf", &velocidadeVeiculo);
    
    taxaUltrapassagem = (velocidadeVeiculo/velocidadeMaxima);
    
    if (taxaUltrapassagem > 1 && taxaUltrapassagem <= 1.20){
        printf("85.13\n4");
    }
    
    else if (taxaUltrapassagem > 1.20 && taxaUltrapassagem <= 1.50){
        printf("127.69\n5");
    }
    
    else if (taxaUltrapassagem > 1.50){
        printf("574.62\n7");
    }
    
    else {
        printf("0.00\n0");
    }
    
	return 0;
}