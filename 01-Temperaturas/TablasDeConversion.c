#include <stdio.h>
#include "Conversion.h"

int min = 0;
int max = 300;

void TablaC_AFahr();
void TablaF_ACelsius();


int main (void) {

    TablaC_AFahr();
    
    TablaF_ACelsius();

    return 0;
}



void TablaC_AFahr() {
    printf("Tabla de conversion de celsius a fahrenheit \n");
    printf("%-6s \t %-6s \n", "C", "F");
    
    float fahr;
    
    for (float celsius = min; celsius <= max; celsius += 20) {
        fahr = Fahrenheit(celsius);
        printf("%-6.1f \t %-6.1f \n", celsius, fahr);
    }

    printf("\n\n\n");
}




void TablaF_ACelsius() {
    printf("Tabla de conversion de fahrenheit a celsius\n");
    printf("%-6s \t %-6s \n", "F", "C");

    float celsius;

    for (float fahr = min; fahr <= max; fahr += 20) {
        celsius = Celsius(fahr);
        printf("%-6.1f \t %-6.1f \n", fahr, celsius);
    }

    printf("\n\n\n");
}