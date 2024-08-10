#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int generoMasculino, criterioIdade;
    scanf("%d", &generoMasculino);
    scanf("%d", &criterioIdade);
    
    if (generoMasculino == 0 && criterioIdade == 1){
        printf("1");
    }
    
    else {
        printf("0");
    }
    
	return 0;
}