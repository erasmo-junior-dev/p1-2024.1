#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int credito1, credito2, credito3;
    scanf("%d", &credito1); scanf("%d", &credito2); scanf("%d", &credito3);
    
    if (credito1 == credito2 || credito1 == credito3 || credito2 == credito3){
        printf("S");
    }
    
    else if (credito1 + credito2 == credito3 || credito1 + credito3 == credito2){
        printf("S");
    }
    
    else if (credito2 + credito3 == credito1 ){
        printf("S");
    }
    
    else {
        printf("N");
    }
    
	return 0;
}