#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX_LENGTH 11

int main()
{
    int c,i,state,current_len;
    state = OUT;
    current_len = 0;

    int nchars[MAX_LENGTH];
        for(i = 0; i < MAX_LENGTH; ++i)
        nchars[i] = 0;

    while((c = getchar()) != EOF) {
        if(c == '\n' || c == ' ' || c == '\t') {
            if(state == IN) {
                if(current_len < MAX_LENGTH) {
                    ++nchars[current_len];
                }
                else {
                    ++nchars[MAX_LENGTH - 1];
                }

                state = OUT;
                current_len = 0;
            }
        } else {
            current_len++;
            state = IN;
        }
    }

        for(i = 0; i < MAX_LENGTH; ++i)
            printf("Довжина %2d: %d разів\n", i, nchars[i]); 

    return 0;
}
