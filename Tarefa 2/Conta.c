#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int consumoAgua, conta;
    scanf("%d", &consumoAgua);
    
    if (consumoAgua >= 11 && consumoAgua <= 30){
        conta = (consumoAgua - 10)*1 + 7;
    }
    
    else if (consumoAgua >= 31 && consumoAgua <= 100){
        conta = (consumoAgua - 30)*2 + 7 + 20;
    }
    
    else if (consumoAgua >= 101){
        conta = (consumoAgua - 100)*5 + 7 + 20 + 140;
    }
    
    else {
        conta = 7;
    }
    
    printf("%d", conta);
    
	return 0;
}