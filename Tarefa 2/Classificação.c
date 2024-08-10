#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double ladoA, ladoB, ladoC;
    
    scanf("%lf", &ladoA);
    scanf("%lf", &ladoB);
    scanf("%lf", &ladoC);
    
    if (ladoA == ladoB && ladoA == ladoC){
        printf("equilatero");
    }
    
    else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC){
        printf("isosceles");
    }
    
    else{
        printf("escaleno");
    }
    
	return 0;
}