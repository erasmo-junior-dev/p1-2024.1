#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int levelVoltorb, potenciaChoque;
    scanf("%d", &levelVoltorb);
    
    if (levelVoltorb >= 0 && levelVoltorb <= 20){
        potenciaChoque = 20 + pow(levelVoltorb, 3);
        printf("Potencia de : %d W", potenciaChoque);
    }
    
    else if (levelVoltorb >= 21 && levelVoltorb <= 40){
        potenciaChoque = 8000 + pow(levelVoltorb - 10, 2);
        printf("Potencia de : %d W", potenciaChoque);
    }
    
    else if (levelVoltorb >= 41 && levelVoltorb <= 60){
        potenciaChoque = 9000 + (5*levelVoltorb);
        printf("Potencia de : %d W", potenciaChoque);
    }
    
    else if (levelVoltorb >= 61 && levelVoltorb <= 80){
        potenciaChoque = 9300 + (2*levelVoltorb);
        printf("Potencia de : %d W", potenciaChoque);
    }
    
    else {
        potenciaChoque = 9500 + levelVoltorb;
        printf("Potencia de : %d W", potenciaChoque); 
    }
    
	return 0;
}