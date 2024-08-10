#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double tempFahrenheit, tempCelsius;
    scanf("%lf", &tempFahrenheit);
    
    tempCelsius = (tempFahrenheit - 32)/1.8;
    
    printf("%.2lf", tempCelsius);
    
	return 0;
}