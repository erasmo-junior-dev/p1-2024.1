#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int numeroA, numeroB, numeroC, numeroD;
    scanf("%d", &numeroA);
    scanf("%d", &numeroB);
    scanf("%d", &numeroC);
    scanf("%d", &numeroD);
    
    int produtoAB = numeroA*numeroB;
    int produtoCD = numeroC*numeroD;
    
    printf("DIFERENCA = %d", produtoAB - produtoCD);
    
	return 0;
}