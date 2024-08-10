#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int numeroX, numeroY;
    scanf("%d", &numeroX);
    scanf("%d", &numeroY);
    
    if (numeroX > numeroY){
        printf("1\n");
    }
    else {
        printf("0\n");
    }
    
    if (numeroX == numeroY){
        printf("1\n");
    }
    else {
        printf("0\n");
    }
    
    if (numeroX < numeroY){
        printf("1\n");
    }
    else {
        printf("0\n");
    }
    
    if (numeroX != numeroY){
        printf("1\n");
    }
    else {
        printf("0\n");
    }
    
    if (numeroX >= numeroY){
        printf("1\n");
    }
    else {
        printf("0\n");
    }
    
    if (numeroX <= numeroY){
        printf("1");
    }
    else {
        printf("0");
    }
    
	return 0;
}