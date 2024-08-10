#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double salario, comprometimento, limiteEmprestimo;
    double emprestimoDisponivel;
    
    scanf("%lf", &salario); scanf("%lf", &comprometimento);
    
    limiteEmprestimo = salario*0.3;
    
    if (comprometimento >= limiteEmprestimo){
        emprestimoDisponivel = 0;
    }
    
    else {
        emprestimoDisponivel = limiteEmprestimo - comprometimento;
    }
    
    printf("%.2lf", emprestimoDisponivel);
    
	return 0;
}