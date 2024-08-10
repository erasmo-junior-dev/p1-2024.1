#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double salario, aumento, salarioReajustado;
    scanf("%lf", &salario);
    
    if (salario <= 280){
        aumento = 0.2;
        salarioReajustado = salario + (salario*aumento);
    }
    
    else if (salario > 280 && salario <= 700){
        aumento = 0.15;
        salarioReajustado = salario + (salario*aumento);
    }
    
    else if (salario > 700 && salario < 1500){
        aumento = 0.10;
        salarioReajustado = salario + (salario*aumento);
    }
    
    else {
        aumento = 0.05;
        salarioReajustado = salario + (salario*aumento);
    }
    
    printf("%.2lf\n%.0lf\n", salario, aumento*100);
    printf("%.2lf\n%.2lf", salarioReajustado - salario, salarioReajustado);
    
	return 0;
}