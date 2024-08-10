#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double numeroA, numeroB, numeroC, delta;
    double raiz1, raiz2;
    
    scanf("%lf", &numeroA); scanf("%lf", &numeroB); scanf("%lf", &numeroC);
    
    if (numeroA == 0){
        printf("NEESG");
    }
    else if (numeroB == 0 && numeroC > 0){
        printf("NRR");
    }
    
    else {
        delta = pow(numeroB, 2) - 4*(numeroA*numeroC);
        
        if (delta < 0){
            printf("NRR");
        }
        
        else {
            raiz1 = (-numeroB + sqrt(delta))/(2*numeroA);
            raiz2 = (-numeroB - sqrt(delta))/(2*numeroA);
            
            printf("%.2lf\n", raiz1);
            printf("%.2lf", raiz2);
        }
        
    }
    
	return 0;
}