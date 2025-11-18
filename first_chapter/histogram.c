#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int c,i,state,nchars,nword;
    state = OUT;

    while((c = getchar()) != EOF) {
        if(c == '\n' || c == ' ' || c == '\t') {
            if(state == IN) {
                state = OUT;
            }
        } else {
            ++n;
            int length[nwords];
            
            for(i = 0; i < nwords; ++i) {
                length[i] += nwords;   
            }         
            state = IN;
        }
    }
       

    return 0;
}