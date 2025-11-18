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

<<<<<<< HEAD
    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == ' ' || c == '\t') {
            if (state == IN) {
                if (current_len < MAX_LENGTH) {
                    ++nchars[current_len];
                } else {
                    ++nchars[MAX_LENGTH - 1];
                }
=======
    while((c = getchar()) != EOF) {
        if(c == '\n' || c == ' ' || c == '\t') {
            if(state == IN) {
                if(current_len < MAX_LENGTH) {
                    ++nchars[current_len];
                }
                else {
                    ++nchars[MAX_LENGTH - 1];
                }

>>>>>>> 301c358 ([Feautre] fix bug and boost security for histogram program)
                state = OUT;
                current_len = 0;
            }
        } else {
            current_len++;
            state = IN;
        }
    }

<<<<<<< HEAD
    for (i = 0; i < MAX_LENGTH; ++i)
        printf("Довжина %2d: %d разів\n", i, nchars[i]);
=======
        for(i = 0; i < MAX_LENGTH; ++i)
            printf("Довжина %2d: %d разів\n", i, nchars[i]);
>>>>>>> 301c358 ([Feautre] fix bug and boost security for histogram program)

    return 0;
}
