#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int num1, num2 = 0;
    scanf ("%d %d", &num1, &num2);
    
    if (num1 < num2)
    {
        printf ("%d %d", num1, num2);
    }
    else
    {
        printf ("%d %d", num2, num1);
    }
    
	return 0;
}