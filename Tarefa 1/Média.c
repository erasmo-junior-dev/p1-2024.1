#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double nota1, nota2, media;
    scanf("%lf", &nota1);
    scanf("%lf", &nota2);
    
    media = ((nota1*3.5) + (nota2*7.5))/11;
    
    printf("MEDIA = %.5lf", media);
    
	return 0;
}