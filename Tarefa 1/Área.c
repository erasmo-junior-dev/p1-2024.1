#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double raio, pi, areaCircunferencia;
    scanf("%lf", &raio);
    
    pi = 3.14159;
    raio = raio/100;
    
    areaCircunferencia = pi*(raio*raio);
    
    printf("Area = %.4lf", areaCircunferencia);
    
	return 0;
}