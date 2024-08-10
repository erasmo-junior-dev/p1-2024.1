#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int quantidadeLivros, quantidadeAlunos, mediaLivroAlunos;
    scanf("%d", &quantidadeLivros);
    scanf("%d", &quantidadeAlunos);
    
    mediaLivroAlunos = (double) quantidadeAlunos/quantidadeLivros;
    
    if (mediaLivroAlunos <= 8){
        printf("A");
    }
    
    else if (mediaLivroAlunos >= 9 && mediaLivroAlunos <= 12){
        printf("B");
    }
    
    else if (mediaLivroAlunos >= 13 && mediaLivroAlunos <= 18){
        printf("C");
    }
    
    else{
        printf("D");
    }
    
	return 0;
}