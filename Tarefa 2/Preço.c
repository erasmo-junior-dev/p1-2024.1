#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double litroCombustivel, preco;
    char tipoCombustivel;
    
    scanf("%lf\n%c", &litroCombustivel, &tipoCombustivel);
    
    // Deixei tudo em um scanf, pois está dando erro de memória em mais de um scanf.
    
    if (tipoCombustivel == 'A'){
        
        if (litroCombustivel <= 20){
            preco = (litroCombustivel*1.90) - (litroCombustivel*(1.90*0.03));
            
            printf("R$ %.2lf", preco);
        }
        
        else {
            preco = (litroCombustivel*1.90) - (litroCombustivel*(1.90*0.05));
            
            printf("R$ %.2lf", preco);
        }
        
    }
    
    else if (tipoCombustivel == 'G'){
        
        if (litroCombustivel <= 20){
            preco = (litroCombustivel*2.50) - (litroCombustivel*(2.50*0.04));
            
            printf("R$ %.2lf", preco);
        }
        
        else {
            preco = (litroCombustivel*2.50) - (litroCombustivel*(2.50*0.06));
            
            printf("R$ %.2lf", preco);
        }
        
    }
    
    else {
        
        if (litroCombustivel <= 25){
            preco = (litroCombustivel*1.66);
            
            printf("R$ %.2lf", preco);
        }
        
        else {
            preco = (litroCombustivel*1.66) - (litroCombustivel*(1.66*0.04));
            
            printf("R$ %.2lf", preco);
        }
        
    }
    
	return 0;
}