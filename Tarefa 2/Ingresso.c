#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int ehEstudante, ehIdoso;
    scanf("%d", &ehEstudante); scanf("%d", &ehIdoso);
    
    if(ehEstudante == 0 && ehIdoso == 0){
        printf("0");
    }
    
    else {
        printf("1");
    }
    
    
	return 0;
}