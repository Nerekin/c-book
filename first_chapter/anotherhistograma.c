#include <stdio.h>

#define ASCII 128

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
        if(i == '\n') {
            printf("Symbol '\\n': %d time\n", counts[i]);
        }
        else if(counts[i] >= 1){
            printf("Symbol '%c': %d time\n", i, counts[i]);
        }
    }
  
    return 0;
}