#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int quantidadeProblemas, problemasResolvidos;
    scanf("%d", &quantidadeProblemas);
    scanf("%d", &problemasResolvidos);
    
    double percentualAtividades = ((double)problemasResolvidos/quantidadeProblemas)*100;
    
    if (percentualAtividades >= 0 && percentualAtividades < 20){
        printf("%.2lf%% 4.40%% Pessimo", percentualAtividades);
    }
    
    else if (percentualAtividades >= 20 && percentualAtividades < 40){
        printf("%.2lf%% 31.65%% Ruim", percentualAtividades);
    }
    
    else if (percentualAtividades >= 40 && percentualAtividades < 60){
        printf("%.2lf%% 56.82%% Bom", percentualAtividades);
    }
    
    else if (percentualAtividades >= 60 && percentualAtividades < 80){
        printf("%.2lf%% 80.00%% Muito Bom", percentualAtividades);
    }
    
    else {
        printf("%.2lf%% 94.00%% Excelente", percentualAtividades);
    }
    
	return 0;
}