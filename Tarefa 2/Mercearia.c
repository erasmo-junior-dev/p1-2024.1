#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){ 

    int produto1 = 1;
    int produto2 = 2;
    int produto3 = 3;
    int produto4 = 4;

    double valorProduto1 = 5.3;
    double valorProduto2 = 6;
    double valorProduto3 = 3.2;
    double valorProduto4 = 2.5;

    int usuarioProduto, quantidade;
    scanf("%d", &usuarioProduto);
    scanf("%d", &quantidade);

    double valorFinal;

    if (usuarioProduto == 1 ){
        valorFinal = valorProduto1*quantidade;
    }

    else if (usuarioProduto == 2 ){
        valorFinal = valorProduto2*quantidade;
    }

    else if (usuarioProduto == 3 ){
        valorFinal = valorProduto3*quantidade;
    }

    else if (usuarioProduto == 4 ){
        valorFinal = valorProduto4*quantidade;
    }

    if (quantidade >=15 || valorFinal >= 40){
        valorFinal = valorFinal*0.85;
    }

    printf("R$ %.2lf", valorFinal);

    return 0;
}