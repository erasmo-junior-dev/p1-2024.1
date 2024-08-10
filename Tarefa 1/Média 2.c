#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double notaA, notaB, notaC, media;
    
    scanf("%lf", &notaA);
    scanf("%lf", &notaB);
    scanf("%lf", &notaC);
    
    media = ((notaA*2)+(notaB*3)+notaC*5)/10;
    
    printf("MEDIA = %.1lf", media);
    
	return 0;
}