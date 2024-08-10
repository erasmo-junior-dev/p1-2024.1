#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int idade, segundosVividos;
    scanf("%d", &idade);
    
    segundosVividos = ((60*(60*24))*365)*idade;
    
    /*
    Deixei que o próprio programa calculasse a quantidade de segundos em um ano,
    a ordem dos fatores não altera o produto, mas deixei entre parênteses para
    quem fosse analisar por fora pudesse entender a lógica por trás.
    */
    
    printf("%d", segundosVividos);
    
	return 0;
}