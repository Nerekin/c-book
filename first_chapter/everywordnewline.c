#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int c, nw, state = OUT;
    c = nw = 0;

    while((c = getchar()) != EOF) {
        if(c == ' ' || c == '\n' || c == '\t') 
            state = OUT;

        else if(c == OUT) {
            state = IN;
            nw++;
        }  
    }
    printf("%d", nw);
    return 0;
}