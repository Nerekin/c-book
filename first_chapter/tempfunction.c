#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float fahrconv() {
    float celsius, fahr;
    
    for(celsius = LOWER; celsius <= UPPER; celsius += STEP) {
        fahr = celsius * 1.8 + 32.0;
        printf("%4.0f\t%8.1f\n", celsius, fahr);
    }

    return fahr;
}

float celsconv() {
    float celsius, fahr;
    
    for(fahr = LOWER; fahr <= UPPER; fahr += STEP) {
        celsius = (fahr -32.0) / 1.8;
        printf("%4.1f\t%8.0f\n", celsius, fahr);
    }
    
    return celsius;
}

int main() {
    float celsius, fahr;
    int ans;

    printf("Hello, it`s temperature conversion programm\nChoose what u want to convertate (c/F): ");
    ans = getchar();

    if(ans == 'c' || ans == 'C') {
        printf("\nFahr\t   Celsius\n");
        celsconv();
    }

    else if (ans == 'f' || ans == 'F') {
        printf("\nCelsius\t    Fahr\n");
        fahrconv();

    } else {
        printf("\nEnter only c,C/F,f\n");
        return 1;
    }

    return 0;
}

    
