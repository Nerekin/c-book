#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int c,i,state,length;
    int nwords [30];
    length = 0;
    state = OUT;

    for(i = 0; i < 30; ++i) {
        nwords[i] = 0;
    }
    
    while((c = getchar()) != EOF) {
        if(c == '\n' || c == ' ' || c == '\t') {
            if(state == IN) {
                state = OUT;
            }
        } else {
            ++nwords[c - '0'];
            length += nwords[i];
            state = IN;
        }
      
    }
    for(i = 0; i < 10; ++i)
          printf(" %d", nwords[i]);

    return 0;
}