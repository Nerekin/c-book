#include <stdio.h>

#define ASCII 256

int main() {
    int c,i;
    int counts[ASCII];

    for(i = 0; i < ASCII; ++i) {
        counts[i] = 0;
    }

    while((c = getchar()) != EOF) {       
         ++counts[c];
        }

    for(i = 0; i < ASCII; ++i) {
        if(counts[i] > 0) {
            if(i == '\n') {
                printf("Symbol '\\n' (New line)       : %d | ", counts[i]);
            }
            else if(i == '\t') {
                printf("Symbol '\\t' (Tab)            : %d | ", counts[i]);
            }
            else if(i == ' ') {
                printf("Symbol ' ' (Space)           : %d | ", counts[i]);
            }      
            else if(i >= 33 && i <= 126){
                printf("Symbol '%c'                   : %d | ", i, counts[i]);
            }

            for(int j = 0; j < counts[i]; ++j) {
                putchar('#');
            }
            putchar('\n');
        }
    }
  
    return 0;
}