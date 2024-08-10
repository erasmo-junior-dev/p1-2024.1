#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int numeroFuncionario, horasTrabalhadas;
    double salarioPorHora;
    
    scanf("%d", &numeroFuncionario);
    scanf("%d", &horasTrabalhadas);
    scanf("%lf", &salarioPorHora);
    
    printf("NUMBER = %d\n", numeroFuncionario);
    printf("SALARY = R$ %.2lf", (double)horasTrabalhadas*salarioPorHora);
    
	return 0;
}