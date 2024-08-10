#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int segundos;
    int dias = 0; int horas = 0; int minutos = 0;
    
    
    scanf("%d", &segundos);
    
    dias = segundos/86400;
    segundos = segundos - (dias*86400);
    
    horas = segundos/3600;
    segundos = segundos - (3600*horas);
        
    minutos = segundos/60;
    segundos = segundos - (minutos*60);
            
    printf("%d\n%d\n%d\n%d", dias, horas, minutos, segundos);
        
	return 0;
	
}
