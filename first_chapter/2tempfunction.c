#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float celsius_to_fahr(float celsius) {
    return celsius * 1.8 + 32.0;
}

float fahr_to_celsius(float fahr) {
    return(fahr - 32.0) / 1.8;
}

int main() {
    float temp;
    int ans;

    printf("Hello, it`s temperature conversion programm\nChoose what u want to convertate (c/F): ");
    ans = getchar();

    if(ans == 'c' || ans == 'C') {
        printf("\nCelsius\t   Fahr\n");
        printf("-----------------\n");

        for(temp = LOWER; temp <= UPPER; temp += STEP) {
            printf("%4.0f\t%8.1f\n", temp, celsius_to_fahr(temp));
        }
    }

    else if (ans == 'f' || ans == 'F') {
        printf("\nFahr\t    Celsius\n");
        printf("-----------------\n");

        for(temp = LOWER; temp <= UPPER; temp += STEP) {
            printf("%4.0f\t%8.1f\n", temp, fahr_to_celsius(temp));
        }
    } else {
        printf("-----------------------------\n");
        printf("Error: Enter only c/C || F/f\n");
        return 1;
    }

    return 0;
}
