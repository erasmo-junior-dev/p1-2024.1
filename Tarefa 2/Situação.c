#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double nota1, nota2, nota3, mediaFinal;
    
    scanf("%lf", &nota1);
    scanf("%lf", &nota2);
    scanf("%lf", &nota3);
    
    mediaFinal = (nota1 + nota2 + nota3)/3;
    
    if (mediaFinal >= 0 && mediaFinal <= 40){
        printf("A media do aluno foi %.2lf e ele foi REPROVADO", mediaFinal);
    }
    
    else if (mediaFinal > 40 && mediaFinal < 70){
        printf("A media do aluno foi %.2lf e ele foi FINAL", mediaFinal);
    }
    
    else if (mediaFinal >= 70 && mediaFinal <= 100){
        printf("A media do aluno foi %.2lf e ele foi APROVADO", mediaFinal);
    }
    
    else {
        printf("Media invalida");
    }
    
	return 0;
}